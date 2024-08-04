#ifndef PasillosCastillo_h
#define PasillosCastillo_h
#include "COLORES.h"
#include "cursor.h"
#include "PrincipalGusanito.h"
#include "Principal_FlappyBird.h"
#include "PrincipalCarreras.h"
#include "PrincipalFinal.h"
#include "PasilloCastillo_Escenarios.h"
#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <Windows.h>
#include "PrincipalLaberinto.h"

using namespace std;
using namespace System;





bool EsColisionPuerta1(int x, int y) {

    return matrizPasilloCastillo[y][x] == 1;
}
bool EsColisionPuerta2(int x, int y) {

    return matrizPasilloCastillo[y][x] == 2;
}
bool EsColisionPuerta3(int x, int y) {

    return matrizPasilloCastillo[y][x] == 3;
}
bool EsColisionPuerta4(int x, int y) {

    return matrizPasilloCastillo[y][x] == 4;
}
bool EsColisionPuerta5(int x, int y) {

    return matrizPasilloCastillo[y][x] == 5;
}

void LimpiarAreaCastillo(int x, int y, int ancho, int alto) {
    for (int i = 0; i < alto; ++i) {
        Console::SetCursorPosition(x, y + i);
        for (int j = 0; j < ancho; ++j) {
            colorBackground(9);
            cout << " ";
        }
    }
}

void principalPasilloCastillo() {
    int x = 2;
    int y = 19;


    int pasoTodo = 0;

    char tecla;

   PasillosSueno();
    PersonajeCastillo(x, y);
    while (true) {
        if (_kbhit()) {
            tecla = _getch();


            LimpiarAreaCastillo(x, y, 13, 15);

            if (tecla == 'w' ) {
                y -= 1;
                PersonajeCastillo(x, y);
            }
            else if (tecla == 's' ) {
                y += 1;
                PersonajeCastillo(x, y);
            }
            else if (tecla == 'a' ) {
                x -= 1;
                PersonajeCastillo(x, y);
            }
            else if (tecla == 'd') {
                x += 1;
                PersonajeCastillo(x, y);
            }



            if (tecla == 'w') {

                PersonajeCastillo(x, y);
            }
            else if (tecla == 's' ) {

                PersonajeCastillo(x, y);
            }
            else if (tecla == 'a') {

                PersonajeCastillo(x, y);
            }
            else if (tecla == 'd') {
                PersonajeCastillo(x, y);
            }
            else if (tecla == 'i') {
                PrincipalCarreritas();
                system("cls");
                PasillosSueno();
                PersonajeCastillo(x, y);
                pasoTodo++;
            }
            else if (tecla == 'j') {
                principalFinal();
                break;
            }
            else if (tecla == 'o') {
                PrincipalJuegoGusanito();
                system("cls");
                PasillosSueno();
                PersonajeCastillo(x, y);
            }

            if (tecla=='s' && EsColisionPuerta1(x, y)) {

                PrincipalJuegoGusanito();
                system("cls");
                PasillosSueno();
                PersonajeCastillo(x, y);

                pasoTodo++;
            }
            else if (tecla=='s'&&EsColisionPuerta2(x, y)) {
                PrincipalCarreritas();
                system("cls");
                PasillosSueno();
                PersonajeCastillo(x, y);
                pasoTodo++;
            }
            else if (EsColisionPuerta3(x, y)) {
                PrincipalFlappyBird();
                system("cls");
                PasillosSueno();
                y += 3;
                PersonajeCastillo(x, y);
                pasoTodo++;
            }
            else if (EsColisionPuerta4(x-1, y) && pasoTodo>=4) {
                principalFinal();
                break;
            }
            else if (EsColisionPuerta5(x, y)) {
                PrincipalLab();
                system("cls");
                PasillosSueno();
                y += 3;
                PersonajeCastillo(x, y);
                pasoTodo++;
            }
        }
    }
}
#endif
