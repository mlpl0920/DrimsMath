#ifndef NumerosPuntuacionFlappyBird_h
#define NumerosPuntuacionFlappyBird_h

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

using namespace std;
using namespace System;
void Numero0Flappybird(int x, int y) {

    int Titulocomojugar[8][7] = { {1,1,1,1,1,1,9},
{1,9,12,12,12,1,9},
{1,9,12,12,12,1,9},
{1,9,12,12,12,1,9},
{1,9,12,12,12,1,9},
{1,9,12,12,12,1,9},
{1,9,12,12,12,1,9},
{1,1,1,1,1,1,9} };



    cursor(x, y);
    for (int i = 0; i < 8; ++i) {

        for (int j = 0; j < 7; ++j) {

            colorBackground(Titulocomojugar[i][j]);
            cout << " ";
        }
        cout << endl;
        y++;
        cursor(x, y);
    }
    colorBackground(1);

}
void Numero1Flappybird(int x, int y) {

    int Titulocomojugar[8][7] = {
 {12,12,12,1,9,12,12},
{12,12,1,1,9,12,12},
{12,1,9,1,9,12,12},
{1,9,12,1,9,12,12},
{12,12,12,1,9,12,12},
{12,12,12,1,9,12,12},
{12,12,12,1,9,9,9},
{1,1,1,1,1,1,1} };



    cursor(x, y);
    for (int i = 0; i < 8; ++i) {

        for (int j = 0; j < 7; ++j) {

            colorBackground(Titulocomojugar[i][j]);
            cout << " ";
        }
        cout << endl;
        y++;
        cursor(x, y);
    }
    colorBackground(1);

}
void Numero2Flappybird(int x, int y) {

    int Titulocomojugar[8][7] = {
{12,12,1,1,9,12,12},
{12,1,9,9,1,9,12},
{1,9,12,12,1,9,12},
{12,12,12,12,1,9,12},
{12,12,12,1,9,12,12},
{12,12,1,9,12,12,12},
{12,1,9,12,12,12,12},
{1,1,1,1,1,1,9} };



    cursor(x, y);
    for (int i = 0; i < 8; ++i) {

        for (int j = 0; j < 7; ++j) {

            colorBackground(Titulocomojugar[i][j]);
            cout << " ";
        }
        cout << endl;
        y++;
        cursor(x, y);
    }
    colorBackground(1);

}
void Numero3Flappybird(int x, int y) {

    int Titulocomojugar[8][7] = {
{12,12,1,1,9,12,12},
{12,1,1,9,1,1,9},
{12,1,9,12,1,1,9},
{12,12,12,12,1,9,12},
{12,12,1,1,9,12,12},
{12,12,12,12,1,1,9},
{12,1,1,12,1,1,9},
{12,12,1,1,1,9,12} };



    cursor(x, y);
    for (int i = 0; i < 8; ++i) {

        for (int j = 0; j < 7; ++j) {

            colorBackground(Titulocomojugar[i][j]);
            cout << " ";
        }
        cout << endl;
        y++;
        cursor(x, y);
    }
    colorBackground(1);

}
void Numero4Flappybird(int x, int y) {

    int Titulocomojugar[8][7] = { {12,12,12,12,1,9,12},
{12,12,12,1,1,9,12},
{12,12,1,9,1,9,12},
{12,1,9,12,1,9,12},
{1,9,12,12,1,9,9},
{1,1,1,1,1,1,1},
{12,12,12,12,1,9,12},
{12,12,12,12,1,9,12} };




    cursor(x, y);
    for (int i = 0; i < 8; ++i) {

        for (int j = 0; j < 7; ++j) {

            colorBackground(Titulocomojugar[i][j]);
            cout << " ";
        }
        cout << endl;

        y++;
        cursor(x, y);
    }
    colorBackground(1);

}
void Numero5Flappybird(int x, int y) {

    int Titulocomojugar[8][7] = { {1,1,1,1,1,1,1},
{1,9,9,9,9,9,9},
{1,9,12,12,12,12,12},
{1,1,1,1,1,1,1},
{12,12,12,12,12,9,1},
{12,12,12,12,12,9,1},
{9,9,9,9,9,9,1},
{1,1,1,1,1,1,1} };





    cursor(x, y);
    for (int i = 0; i < 8; ++i) {

        for (int j = 0; j < 7; ++j) {

            colorBackground(Titulocomojugar[i][j]);
            cout << " ";
        }
        cout << endl;

        y++;
        cursor(x, y);
    }
    colorBackground(1);

}
void Numero6Flappybird(int x, int y) {

    int Titulocomojugar[8][7] = { {12,12,1,1,1,1,1},
{12,1,1,1,1,1,1},
{1,1,12,12,12,12,12},
{1,1,1,1,1,1,1},
{1,1,9,9,9,1,1},
{1,1,9,12,12,1,1},
{1,1,9,12,12,1,1},
{12,1,1,1,1,1,1} };





    cursor(x, y);
    for (int i = 0; i < 8; ++i) {

        for (int j = 0; j < 7; ++j) {

            colorBackground(Titulocomojugar[i][j]);
            cout << " ";
        }
        cout << endl;

        y++;
        cursor(x, y);
    }
    colorBackground(1);

}
void Numero7Flappybird(int x, int y) {

    int Titulocomojugar[8][7] = { {1,1,1,1,1,1,1},
{9,9,9,9,9,9,1},
{12,12,12,12,12,1,9},
{12,12,12,12,1,1,9},
{12,12,12,1,1,9,12},
{12,12,1,1,9,12,12},
{12,1,1,9,12,12,12},
{12,1,9,12,12,12,12} };





    cursor(x, y);
    for (int i = 0; i < 8; ++i) {

        for (int j = 0; j < 7; ++j) {

            colorBackground(Titulocomojugar[i][j]);
            cout << " ";
        }
        cout << endl;

        y++;
        cursor(x, y);
    }
    colorBackground(1);

}
void Numero8Flappybird(int x, int y) {

    int Titulocomojugar[8][7] = { {12,1,1,1,1,1,12},
{1,9,12,12,12,12,1},
{1,9,9,9,9,9,1},
{1,1,1,1,1,1,1},
{1,9,12,12,12,12,1},
{1,9,12,12,12,12,1},
{1,9,9,9,9,9,1},
{12,1,1,1,1,1,12} };





    cursor(x, y);
    for (int i = 0; i < 8; ++i) {

        for (int j = 0; j < 7; ++j) {

            colorBackground(Titulocomojugar[i][j]);
            cout << " ";
        }
        cout << endl;

        y++;
        cursor(x, y);
    }
    colorBackground(1);

}
void Numero9Flappybird(int x, int y) {

    int Titulocomojugar[8][7] = { {12,1,1,1,1,1,12},
{1,9,9,9,9,9,1},
{1,9,12,12,12,12,1},
{1,1,1,1,1,1,1},
{12,12,12,12,12,12,1},
{12,12,12,12,12,12,1},
{1,12,12,12,12,12,1},
{12,1,1,1,1,1,12} };





    cursor(x, y);
    for (int i = 0; i < 8; ++i) {

        for (int j = 0; j < 7; ++j) {

            colorBackground(Titulocomojugar[i][j]);
            cout << " ";
        }
        cout << endl;

        y++;
        cursor(x, y);
    }
    colorBackground(1);

}




#endif
