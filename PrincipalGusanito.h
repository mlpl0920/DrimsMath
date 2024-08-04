#ifndef PrincipalGusanito_h
#define PrincipalGusanito_h

#include "pch.h"
#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include "COLORES.h"
#include "cursor.h"

#include "EscenariosGusanito.h"

using namespace std;
using namespace System;

// Estructura del Gusanito
struct Gusanito {
    int* x;
    int* y;
    int tamano;
};

// Inicializa el gusanito en una posición específica
void inicializarGusanito(Gusanito& gusanito, int tamanoInicial) {
    gusanito.tamano = tamanoInicial;
    gusanito.x = new int[gusanito.tamano];
    gusanito.y = new int[gusanito.tamano];
    int xInicialG;
    int yInicialG;
    if (etapaActual == 1)
    {
        xInicialG = 10;
        yInicialG = 15;
    }
    else if (etapaActual == 2)
    {
        xInicialG = 44;
        yInicialG = 10;
    }
    else if (etapaActual == 3)
    {
        xInicialG = 106;
        yInicialG = 8;
    }
    else if (etapaActual == 4)
    {
        xInicialG = 135;
        yInicialG = 12;
    }
    else if (etapaActual == 5)
    {
        xInicialG = 133;
        yInicialG = 14;
    }
    else if (etapaActual == 6)
    {
        xInicialG = 140;
        yInicialG = 23;
    }
    else if (etapaActual == 7)
    {
        xInicialG = 135;
        yInicialG = 28;
    }
    else if (etapaActual == 8)
    {
        xInicialG = 100;
        yInicialG = 38;
    }
    else if (etapaActual == 9)
    {
        xInicialG = 70;
        yInicialG = 38;
    }
    else if (etapaActual == 10)
    {
        xInicialG = 20;
        yInicialG = 30;
    }
    else if (etapaActual == 11)
    {
        xInicialG = 22;
        yInicialG = 22;
    }
    else if (etapaActual == 12)
    {
        xInicialG = 40;
        yInicialG = 21;
    }
    gusanito.x[0] = xInicialG;
    gusanito.y[0] = yInicialG;
}

// Libera la memoria del gusanito
void destruirGusanito(Gusanito& gusanito) {
    delete[] gusanito.x;
    delete[] gusanito.y;
    gusanito.x = nullptr;
    gusanito.y = nullptr;
    gusanito.tamano = 0;
}

// Dibuja el gusanito en el mapa
void dibujarGusanito(const Gusanito& gusanito) {
    for (int i = 0; i < gusanito.tamano; i++) {
        cursor(gusanito.x[i], gusanito.y[i]);
        colorBackground(4);
        cout << " ";
    }
    colorBackground(8);
}

// Borra la última posición del gusanito
void borrarGusanito(int x, int y) {
    cursor(x, y);
    colorBackground(8);
    cout << " ";
}

// Hace crecer al gusanito en una unidad
void crecerGusanito(Gusanito& gusanito) {
    int* nuevosX = new int[gusanito.tamano + 1];
    int* nuevosY = new int[gusanito.tamano + 1];
    for (int i = 0; i < gusanito.tamano; i++) {
        nuevosX[i] = gusanito.x[i];
        nuevosY[i] = gusanito.y[i];
    }
    delete[] gusanito.x;
    delete[] gusanito.y;
    gusanito.x = nuevosX;
    gusanito.y = nuevosY;
    gusanito.tamano++;
}

// Mueve el gusanito y lo dibuja en la nueva posición
void moverGusanito(Gusanito& gusanito, int nuevaX, int nuevaY, bool comeManzana) {
    if (comeManzana) {
        crecerGusanito(gusanito);
    }
    else {
        borrarGusanito(gusanito.x[gusanito.tamano - 1], gusanito.y[gusanito.tamano - 1]);
    }
    for (int i = gusanito.tamano - 1; i > 0; i--) {
        gusanito.x[i] = gusanito.x[i - 1];
        gusanito.y[i] = gusanito.y[i - 1];
    }
    gusanito.x[0] = nuevaX;
    gusanito.y[0] = nuevaY;
    dibujarGusanito(gusanito);
}

// Verifica si el gusanito choca consigo mismo
bool gusanitoChocaConsigoMismo(const Gusanito& gusanito) {
    for (int i = 1; i < gusanito.tamano; i++) {
        if (gusanito.x[0] == gusanito.x[i] && gusanito.y[0] == gusanito.y[i]) {
            return true;
        }
    }
    return false;
}



// Muestra la pantalla de bienvenida
void mostrarPantallaDeBienvenidaGusanito() {
    system("cls");
    cursor(50, 20);
    color(1);
    cout << "Minimize y vuelva a maximizar la pantalla por favor";
    cursor(54, 22);
    cout << "Presione cualquier tecla para continuar.";
    _getch();
    system("cls");
}

// Función para reiniciar el tamaño y la posición del gusanito
void reiniciarGusanito(Gusanito& gusanito) {
    destruirGusanito(gusanito); // Libera la memoria del gusanito


    // Inicializa de nuevo el gusanito con tamaño inicial, manteniendo la posición
    gusanito.tamano = 1;
    gusanito.x = new int[gusanito.tamano];
    gusanito.y = new int[gusanito.tamano];
    gusanito.x[0] = posicionXFinalGusanito;
    gusanito.y[0] = posicionYFinalGusanito;
}

void avanzarEtapa(Gusanito& gusanito) {
    if (etapaActual < 12) {
        // Guarda la posición actual del gusanito
        posicionXFinalGusanito = gusanito.x[0];
        posicionYFinalGusanito = gusanito.y[0];
        etapaActual++;
        reiniciarEtapaActual();  // Solo reinicia la etapa actual, no el gusanito
    }
}

// Función para jugar
void jugar(bool& continuarJuego) {
    copiarMapaInicial1(); 
    reiniciarEtapaActual(); 
    Gusanito gusanito;
    inicializarGusanito(gusanito, 1);

    int puntaje = 0;
    bool juegoActivo = true;
    char ultimaDireccion = 'd';

    dibujarEtapaActual();

    while (juegoActivo) {
        if (_kbhit()) {
            char tecla = _getch();
            if (tecla == 'w' || tecla == 's' || tecla == 'a' || tecla == 'd') {
                ultimaDireccion = tecla;
            }
            else if (tecla == 'p') {
                juegoActivo = false;
                continuarJuego = false;
            }
        }

        int nuevaX = gusanito.x[0];
        int nuevaY = gusanito.y[0];
        switch (ultimaDireccion) {
        case 'w': nuevaY--; break;
        case 's': nuevaY++; break;
        case 'a': nuevaX--; break;
        case 'd': nuevaX++; break;
        
        }

        if (nuevaX < 0 || nuevaX >= 156 || nuevaY < 0 || nuevaY >= 44 || mapaEstadoActual[nuevaY][nuevaX] == 1) {
            juegoActivo = false;
            cout << "¡Perdiste! El gusanito chocó contra el muro." << endl;
            cout << "Puntaje final: " << puntaje << endl;
            
            reiniciarEtapaActual();
            reiniciarGusanito(gusanito);
            dibujarEtapaActual();
            break;
        }

        if (mapaEstadoActual[nuevaY][nuevaX] >= 2 && mapaEstadoActual[nuevaY][nuevaX] <= 25) {
            puntaje++;
            manejarColisionConManzana(mapaEstadoActual[nuevaY][nuevaX]);
            mapaEstadoActual[nuevaY][nuevaX] = 0;
            cursor(nuevaX, nuevaY);
            colorBackground(8);
            cout << " ";
            moverGusanito(gusanito, nuevaX, nuevaY, true);
        }
        else {
            moverGusanito(gusanito, nuevaX, nuevaY, false);
        }

        mostrarPerimetros();

        if (todasManzanasComidas(2, 3) && etapaActual == 1) {
            avanzarEtapa(gusanito);
            reiniciarGusanito(gusanito);
            dibujarEtapaActual();
        }
        else if (todasManzanasComidas(4, 5) && etapaActual == 2) {
            avanzarEtapa(gusanito);
            reiniciarGusanito(gusanito);
            dibujarEtapaActual();
        }
        else if (todasManzanasComidas(6, 7) && etapaActual == 3) {
            avanzarEtapa(gusanito);
            reiniciarGusanito(gusanito);
            dibujarEtapaActual();
        }
        else if (todasManzanasComidas(8, 9) && etapaActual == 4) {
            avanzarEtapa(gusanito);
            reiniciarGusanito(gusanito);
            dibujarEtapaActual();
        }
        else if (todasManzanasComidas(10, 11) && etapaActual == 5) {
            avanzarEtapa(gusanito);
            reiniciarGusanito(gusanito);
            dibujarEtapaActual();
        }
        else if (todasManzanasComidas(12, 13) && etapaActual == 6) {
            avanzarEtapa(gusanito);
            reiniciarGusanito(gusanito);
            dibujarEtapaActual();
        }
        else if (todasManzanasComidas(14, 15) && etapaActual == 7) {
            avanzarEtapa(gusanito);
            reiniciarGusanito(gusanito);
            dibujarEtapaActual();
        }
        else if (todasManzanasComidas(16, 17) && etapaActual == 8) {
            avanzarEtapa(gusanito);
            reiniciarGusanito(gusanito);
            dibujarEtapaActual();
        }
        else if (todasManzanasComidas(18, 19) && etapaActual == 9) {
            avanzarEtapa(gusanito);
            reiniciarGusanito(gusanito);
            dibujarEtapaActual();
        }
        else if (todasManzanasComidas(20, 21) && etapaActual == 10) {
            avanzarEtapa(gusanito);
            reiniciarGusanito(gusanito);
            dibujarEtapaActual();
        }
        else if (todasManzanasComidas(22, 23) && etapaActual == 11) {
            avanzarEtapa(gusanito);
            reiniciarGusanito(gusanito);
            dibujarEtapaActual();
        }
        else if (todasManzanasComidas(24, 25) && etapaActual == 12)
        {
            colorBackground(1);
            cout << "¡Ganaste! Todas las manzanas han sido comidas." << endl;
            juegoActivo = false;
            break;
        }

        if (gusanitoChocaConsigoMismo(gusanito)) {
            cout << "¡Perdiste! El gusanito chocó consigo mismo." << endl;
            cout << "Puntaje final: " << puntaje << endl;
            
            reiniciarEtapaActual();
            reiniciarGusanito(gusanito);
            dibujarEtapaActual();
            juegoActivo = false;
        }

        Sleep(100);
    }

    destruirGusanito(gusanito);

    cout << "Presiona cualquier tecla para reiniciar el juego..." << endl;
    _getch();
}

// Función principal para el juego del Gusanito
void PrincipalJuegoGusanito() {
    srand(time(0));
    bool continuarJuego = true;

    while (continuarJuego) {
        system("cls");
        jugar(continuarJuego);
    }
}

#endif
