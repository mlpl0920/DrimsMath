#ifndef Principal_FlappyBird_h
#define Principal_FlappyBird_h

#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <Windows.h>
#include <thread>
#include "COLORES.h"
#include "cursor.h"
#include "EscenariosFlappyBird.h"
#include "StatsFlappyBird.h"


using namespace std;
using namespace System;

const int anchoPantalla = 95;
const int altoPantalla = 44;
const int espacioEntreTubos = 50;
const int alturaMaxTubo = 10;
const int alturaMinTubo = 5;
const int espacioTubo = 20;
const float gravedad = 0.6;
const int salto = -3;
const int anchoPajaro = 3;
const int altoPajaro = 2;
const int grosorTubo = 3;

struct Tubo {
    int x;
    int alturaSuperior;
    int alturaInferior;
    int numeroPrimo;
};

struct Pajaro {
    float x;
    float y;
    float velocidad;
};

void definirTamañoConsola(int ancho, int alto) {
    COORD bufferSize;
    bufferSize.X = ancho;
    bufferSize.Y = alto;
    SetConsoleScreenBufferSize(GetStdHandle(STD_OUTPUT_HANDLE), bufferSize);

    SMALL_RECT windowSize;
    windowSize.Left = 0;
    windowSize.Top = 0;
    windowSize.Right = ancho - 1;
    windowSize.Bottom = alto - 1;
    SetConsoleWindowInfo(GetStdHandle(STD_OUTPUT_HANDLE), TRUE, &windowSize);
}

void mostrarPuntuacion(int puntuacion) {
    cursor(0, 0);
    color(11);
    cout << "Puntuacion: " << puntuacion << " ";
}

bool esPrimo(int num) {
    if (num < 2) return false;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int siguientePrimo(int num) {
    num++;
    while (!esPrimo(num)) {
        num++;
    }
    return num;
}

void dibujarTubo(const Tubo& tubo) {
    char c = 219;

    for (int i = 0; i < tubo.alturaSuperior; i++) {
        cursor(tubo.x, i + 1);
        color(14);
        if (i == tubo.alturaSuperior - 1) {
            cursor(tubo.x - 1, i + 1);
            cout << string(5, c) << " ";
        }
        else {
            cout << string(3, c);
        }
    }

    int y = tubo.alturaSuperior + espacioTubo / 2;
    cursor(tubo.x - 1, y);
    color(11);
    cout << " " << tubo.numeroPrimo << " ";

    y = tubo.alturaSuperior + espacioTubo;
    for (int i = 0; i < tubo.alturaInferior; i++) {
        cursor(tubo.x, y + i + 1);
        color(14);
        if (i == 0) {
            cursor(tubo.x - 1, y + i + 1);
            cout << string(5, c) << " ";
        }
        else {
            cout << string(3, c);
        }
    }
}

void borrarTubo(const Tubo& tubo) {
    for (int i = 0; i < tubo.alturaSuperior; i++) {
        cursor(tubo.x, i + 1);
        if (i == tubo.alturaSuperior - 1) {
            cursor(tubo.x - 1, i + 1);
            colorBackground(12); cout << string(6, ' ');
        }
        else {
            colorBackground(12); cout << string(3, ' ');
        }
    }

    int y = tubo.alturaSuperior + espacioTubo / 2;
    cursor(tubo.x - 1, y);
    cout << "     ";

    y = tubo.alturaSuperior + espacioTubo;
    for (int i = 0; i < tubo.alturaInferior; i++) {
        cursor(tubo.x, y + i + 1);
        if (i == 0) {
            cursor(tubo.x - 1, y + i + 1);
            colorBackground(12); cout << string(6, ' ');
        }
        else {
            colorBackground(12); cout << string(3, ' ');
        }
    }
}

void generarTubo(Tubo& tubo, int anchoPantalla, int espacioEntreTubos, int indice) {
    tubo.x = anchoPantalla + indice * espacioEntreTubos;
    tubo.alturaSuperior = rand() % (alturaMaxTubo - alturaMinTubo + 1) + alturaMinTubo;
    tubo.alturaInferior = altoPantalla - tubo.alturaSuperior - espacioTubo - 2;
}

void dibujarPajaro(const Pajaro& pajaro) {
    cursor(pajaro.x, pajaro.y + 1);
    color(10);
    cout << string(anchoPajaro, char(219));
    cursor(pajaro.x - 1, pajaro.y + 2);
    cout << char(254) << string(anchoPajaro, char(219)); color(6); cout << char(223);
}

void borrarPajaro(const Pajaro& pajaro) {
    cursor(pajaro.x, pajaro.y + 1);
    colorBackground(12); cout << string(anchoPajaro, ' ');
    cursor(pajaro.x - 1, pajaro.y + 2);
    colorBackground(12); cout << " " << string(anchoPajaro, ' ') << " ";
}

bool detectarColision(const Pajaro& pajaro, const Tubo& tubo) {
    if (pajaro.x + anchoPajaro + 1 >= tubo.x && pajaro.x <= tubo.x + grosorTubo) {
        if (pajaro.y <= tubo.alturaSuperior || pajaro.y + altoPajaro >= tubo.alturaSuperior + espacioTubo) {
            return true;
        }
    }
    return false;
}

void mostrarPantallaDeBienvenida() {
    system("cls");
    cursor(50, 20);
    color(11);
    cout << "Minimize y vuelva a maximizar la pantalla por favor";
    cursor(54, 22);
    cout << "Presione cualquier tecla para continuar.";
    _getch();
    system("cls");
}


void PrincipalFlappyBird() {
    definirTamañoConsola(anchoPantalla, altoPantalla);
    int opcionActualFlappyBird = 0;
    bool juegoActivo = true;
    bool hasWon = false;
    bool muroAparecido = false;
    
    while (juegoActivo) {
        mostrarPantallaDeBienvenida();
        FondoCeleste();
        srand(time(0));

        Pajaro pajaro = { 30, 15, 0 };
        bool gameOver = false;
        int puntuacion = 0;
        int siguienteTubo = 0;
        int primoActual = 2;

        int cantidadTubos = anchoPantalla / espacioEntreTubos + 1;
        Tubo* tubos = new Tubo[cantidadTubos];

        for (int i = 0; i < cantidadTubos; i++) {
            generarTubo(tubos[i], anchoPantalla, espacioEntreTubos, i);
            tubos[i].numeroPrimo = primoActual;
            primoActual = siguientePrimo(primoActual);
        }

        while (!gameOver) {
            borrarPajaro(pajaro);

            pajaro.velocidad += gravedad;
            pajaro.y += pajaro.velocidad;

            if (_kbhit()) {
                char tecla = _getch();
                if (tecla == ' ') {
                    pajaro.velocidad = salto;
                }
            }

            for (int i = 0; i < cantidadTubos; i++) {
                borrarTubo(tubos[i]);
                tubos[i].x--;
                if (tubos[i].x < grosorTubo) {
                    generarTubo(tubos[i], anchoPantalla, espacioEntreTubos, cantidadTubos - 1);
                    tubos[i].numeroPrimo = primoActual;
                    primoActual = siguientePrimo(primoActual);
                    if (primoActual == 37) {
                        muroAparecido = true;
                    }
                }
                dibujarTubo(tubos[i]);

                if (detectarColision(pajaro, tubos[i])) {
                    gameOver = true;
                }
            }

            if (muroAparecido) {
                Tubo muro = { tubos[cantidadTubos - 1].x, altoPantalla, 0, 0 };
                dibujarTubo(muro);
                if (detectarColision(pajaro, muro)) {
                    hasWon = true;
                    gameOver = true;
                }
            }

            if (tubos[siguienteTubo].x < pajaro.x - grosorTubo) {
                puntuacion++;
                siguienteTubo = (siguienteTubo + 1) % cantidadTubos;
            }

            dibujarPajaro(pajaro);
            mostrarPuntuacion(puntuacion);

            if (pajaro.y >= altoPantalla - 1 || pajaro.y < 0) {
                gameOver = true;
            }

            Sleep(70);
        }

        system("cls");
        cursor(anchoPantalla / 2 - 5, altoPantalla / 2);
        color(12);
        if (hasWon) {      
            juegoActivo = false;
            FondoNubes();
            CuadroStatsGanasteFlappyBird(35, 10);
            PuntuacionFinalFlappybird(puntuacion);
        }
        else {
            
            FondoNubes();
            CuadroStatsPerdisteFlappyBird(35, 10);
            PuntuacionFinalFlappybird(puntuacion);
            CuadroRestart(56, 31);
            CuadroGoTest(120, 37);
            while (true) {
                char tecla = _getch();
                
                if (tecla == 's') {
                    opcionActualFlappyBird = 2;
                    CuadroRestartBrillante(56, 31);
                    CuadroGoTest(120, 37);
                }
                else if (tecla == 'w') {
                    opcionActualFlappyBird = 1;
                    CuadroRestart(56, 31);
                    CuadroGoTest(120, 37);
                }
                else if (opcionActualFlappyBird == 2 && tecla == 'd') {
                    opcionActualFlappyBird = 3;
                    CuadroGoTestBrillante(120, 37);
                    CuadroRestart(56, 31);
                }
                else if (opcionActualFlappyBird == 3 && tecla == 'a') {
                    opcionActualFlappyBird = 2;
                    CuadroGoTest(120, 37);
                    CuadroRestartBrillante(56, 31);
                }



                if (tecla == char(13) && opcionActualFlappyBird == 2 ) {
                    juegoActivo = true;
                    break;
                }
                else if (tecla == char(13) && opcionActualFlappyBird == 3) {
                    juegoActivo = false;
                    
                    break;
                }
            }
        }

        delete[] tubos;
        
    }
  
}

#endif
