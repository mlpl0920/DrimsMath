#ifndef funcionesLaberinto_h
#define funcionesLaberinto_h
#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <Windows.h>
#include "COLORES.h"
#include "cursor.h"
#include "EscenariosLaberinto.h"

using namespace std;
using namespace System;
void Equis(int x, int y) {

    int Titulocomojugar[8][5] = { {9,9,9,9,9},
{1,9,9,9,1},
{9,1,9,1,9},
{9,9,1,9,9},
{9,1,9,1,9},
{1,9,9,9,1},
{9,9,9,9,9},
{9,9,9,9,9} };
    cursor(x, y);
    for (int i = 0; i < 8; ++i) {

        for (int j = 0; j < 5; ++j) {
            colorBackground(Titulocomojugar[i][j]);
            cout << " ";
        }
        cout << endl;
        y++;
        cursor(x, y);
    }
    colorBackground(1);

}
void Parentesisizquierda(int x, int y) {

    int Titulocomojugar[8][4] = { {9,9,1,9},
{9,1,9,9},
{1,9,9,9},
{1,9,9,9},
{1,9,9,9},
{1,9,9,9},
{9,1,9,9},
{9,9,1,9} };
    cursor(x, y);
    for (int i = 0; i < 8; ++i) {

        for (int j = 0; j < 4; ++j) {
            colorBackground(Titulocomojugar[i][j]);
            cout << " ";
        }
        cout << endl;
        y++;
        cursor(x, y);
    }
    colorBackground(1);

}
void ParentesisDerecha(int x, int y) {

    int Titulocomojugar[8][4] = { {9,1,9,9},
{9,9,1,9},
{9,9,9,1},
{9,9,9,1},
{9,9,9,1},
{9,9,9,1},
{9,9,1,9},
{9,1,9,9} };
    cursor(x, y);
    for (int i = 0; i < 8; ++i) {

        for (int j = 0; j < 4; ++j) {
            colorBackground(Titulocomojugar[i][j]);
            cout << " ";
        }
        cout << endl;
        y++;
        cursor(x, y);
    }
    colorBackground(1);

}
void suma(int x, int y) {

    int Titulocomojugar[8][4] = { {9,9,9,9},
{9,1,1,9},
{9,1,1,9},
{1,1,1,1},
{1,1,1,1},
{9,1,1,9},
{9,1,1,9},
{9,9,9,9} };
    cursor(x, y);
    for (int i = 0; i < 8; ++i) {

        for (int j = 0; j < 4; ++j) {
            colorBackground(Titulocomojugar[i][j]);
            cout << " ";
        }
        cout << endl;
        y++;
        cursor(x, y);
    }
    colorBackground(1);

}
bool EsColision(int x, int y) {
    if (x < 0 || x >= 156 || y < 0 || y >= 44) {
        return true;
    }
    return sistemaColisionesLaberinto[y][x] == 1;
}
bool EsColisionPuerta(int x, int y) {
    return sistemaColisionesLaberinto[y][x] == 7;
}
bool EsColisionSalida(int x, int y) {
    return sistemaColisionesLaberinto[y][x] == 16;
}

void LimpiarAreaLaberinto(int x, int y, int ancho, int alto) {
    for (int i = 0; i < alto; ++i) {
        Console::SetCursorPosition(x, y + i);
        for (int j = 0; j < ancho; ++j) {
            colorBackground(9); 
            cout << " ";
        }
    }
}

void TestLaberintoPuertas() {
    while (true) {
        system("cls");
        PuertaParapasar();
        Numero3Carreras(60, 13); Equis(65, 13);  suma(71, 13);  Numero3Carreras(77, 13);
        Numero3Carreras(53, 25); Numero1Carreras(74, 25); Parentesisizquierda(60, 25); suma(69, 25);  Equis(64, 25); ParentesisDerecha(81, 25);
        Numero5Carreras(88, 25); Numero2Carreras(110, 25); Parentesisizquierda(93, 25); Equis(97, 25); ParentesisDerecha(120, 25);
        Numero6Carreras(130, 25); Numero1Carreras(120, 25); Parentesisizquierda(136, 25); Equis(140, 25); ParentesisDerecha(140, 25);
        char opcion = _getch();
        if (opcion == '1') {
            break;
        }
    }
}

void Mover_Personaje_Laberinto() {
    int x = 2;
    int y = 19;
    char tecla;

    sistemaColisionesLaberinto_Dibujar();
    Personaje_Arriba(x, y);  
    while (true) {
        if (_kbhit()) {
            tecla = _getch();

            
            LimpiarAreaLaberinto(x, y, 3, 3);

            if (tecla == 'w' && !EsColision(x, y - 1)) {
                y -= 1;
                Personaje_Arriba(x, y);
            }
            else if (tecla == 's' && !EsColision(x, y + 4)) {
                y += 1;
                Personaje_Abajo(x, y);
            }
            else if (tecla == 'a' && !EsColision(x - 3, y)) {
                x -= 1;
                Personaje_Izquierda(x, y);
            }
            else if (tecla == 'd' && !EsColision(x + 3, y)) {
                x += 1;
                Personaje_Derecha(x, y);
            }



            if (tecla == 'w' && EsColision(x, y - 1)) {
                
                Personaje_Arriba(x, y);
            }
            else if (tecla == 's' && EsColision(x, y + 4)) {
               
                Personaje_Abajo(x, y);
            }
            else if (tecla == 'a' && EsColision(x - 3, y)) {
                
                Personaje_Izquierda(x, y);
            }
            else if (tecla == 'd' && EsColision(x + 3, y)) {           
                Personaje_Derecha(x, y);
            }
            

            if (tecla == 's' && EsColisionPuerta(x, y + 4)) {

                TestLaberintoPuertas();
                sistemaColisionesLaberinto_Dibujar();
                x = 70; y = 21;
                Personaje_Arriba(x, y);
            }
            else if (tecla == 'd' && EsColisionPuerta(x + 3, y)) {
                TestLaberintoPuertas();
                sistemaColisionesLaberinto_Dibujar();
                x = 100; y = 25;
                Personaje_Abajo(x, y);
            }
            else if (tecla == 'a' && EsColisionPuerta(x - 3, y)) {
                TestLaberintoPuertas();
                sistemaColisionesLaberinto_Dibujar();
                x = 80; y = 9;
                Personaje_Arriba(x, y);
            }
            else if (tecla == 'w' && EsColisionSalida(x, y - 1)) {
                break;
            }
        }
    }
}
#endif
