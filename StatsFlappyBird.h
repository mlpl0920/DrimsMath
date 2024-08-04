#ifndef StatsFlappyBird_h
#define StatsFlapyBird_h

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
#include "NumerosPuntuacionFlappyBird.h"

using namespace std;
using namespace System;

void PuntuacionFinalFlappybird(int n) {
    switch (n)
    {
    case 0: Numero0Flappybird(94, 22);
        break;
    case 1: Numero1Flappybird(94, 22);
        break;
    case 2: Numero2Flappybird(94, 22);
        break;
    case 3: Numero3Flappybird(94, 22);
        break;
    case 4: Numero4Flappybird(94, 22);
        break;
    case 5: Numero5Flappybird(94, 22);
        break;
    case 6: Numero6Flappybird(94, 22);
        break;
    case 7: Numero7Flappybird(94, 22);
        break;
    case 8: Numero8Flappybird(94, 22);
        break;
    case 9: Numero9Flappybird(94, 22);
        break;
    

    }
}

void CuadroStatsGanasteFlappyBird(int x, int y) {

    int Titulocomojugar[25][80] = { {12,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,12},
{13,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,13},
{13,15,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,15,13},
{13,15,10,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,10,15,13},
{13,15,10,12,12,12,12,12,12,12,12,15,15,15,7,12,12,12,12,15,7,12,12,12,15,7,12,12,15,7,12,12,12,15,7,12,12,12,15,15,15,7,12,15,15,15,7,12,15,15,15,7,12,12,15,7,12,15,7,12,15,7,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,10,15,13},
{13,15,10,12,12,12,12,12,12,12,15,7,7,7,12,12,12,12,12,15,7,12,12,12,15,15,7,12,15,7,12,12,12,15,7,12,12,12,15,7,12,12,12,12,15,7,12,12,15,7,12,12,12,12,15,7,12,15,7,12,15,7,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,10,15,13},
{13,15,10,12,12,12,12,12,12,15,7,12,12,12,12,12,12,12,15,12,15,7,12,12,15,7,15,7,15,7,12,12,15,12,15,7,12,12,15,7,7,12,12,12,15,7,12,12,15,7,12,12,12,12,15,7,12,15,7,12,15,7,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,10,15,13},
{13,15,10,12,12,12,12,12,12,15,7,15,15,15,15,7,12,12,15,15,15,7,12,12,15,7,12,15,15,7,12,12,15,15,15,7,12,12,15,15,15,7,12,12,15,7,12,12,15,15,15,7,12,12,15,7,12,15,7,12,15,7,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,10,15,13},
{13,15,10,12,12,12,12,12,12,15,7,12,12,12,15,7,12,15,7,12,12,15,7,12,15,7,12,12,15,7,12,15,7,12,12,15,7,12,12,12,15,7,12,12,15,7,12,12,15,7,12,12,12,12,15,7,12,15,7,12,15,7,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,10,15,13},
{13,15,10,12,12,12,12,12,12,12,15,15,15,15,15,7,12,15,7,12,12,15,7,12,15,7,12,12,15,7,12,15,7,12,12,15,7,12,15,15,15,7,12,12,15,7,12,12,15,15,15,7,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,10,15,13},
{13,15,10,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,15,7,12,15,7,12,15,7,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,10,15,13},
{13,15,10,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,10,15,13},
{13,15,10,12,12,12,12,1,1,1,9,12,12,12,1,9,12,12,1,9,12,1,9,12,12,12,12,1,9,1,1,1,1,1,9,12,1,1,1,1,1,9,12,12,1,1,1,1,9,12,12,12,1,1,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,10,15,13},
{13,15,10,12,12,12,12,1,12,12,1,9,12,12,1,9,12,12,1,9,12,1,1,9,12,12,12,1,9,12,12,1,9,9,12,12,1,9,12,12,1,9,12,12,1,9,12,12,12,12,12,12,1,1,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,10,15,13},
{13,15,10,12,12,12,12,1,12,12,12,1,9,12,1,9,12,12,1,9,12,1,9,1,9,12,12,1,9,12,12,1,9,12,12,12,1,9,12,12,1,9,12,12,1,9,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,10,15,13},
{13,15,10,12,12,12,12,1,12,12,12,1,9,12,1,9,12,12,1,9,12,1,9,12,1,9,12,1,9,12,12,1,9,12,12,12,1,9,12,12,1,9,12,12,1,9,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,10,15,13},
{13,15,10,12,12,12,12,1,12,12,1,9,12,12,1,9,12,12,1,9,12,1,9,12,12,1,9,1,9,12,12,1,9,12,12,12,1,9,12,12,1,9,12,12,1,1,1,1,9,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,10,15,13},
{13,15,10,12,12,12,12,1,1,1,9,12,12,12,1,9,12,12,1,9,12,1,9,12,12,12,1,1,9,12,12,1,9,12,12,12,1,9,12,12,1,9,12,12,12,12,12,1,9,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,10,15,13},
{13,15,10,12,12,12,12,1,9,12,12,12,12,12,1,9,9,9,1,9,12,1,9,12,12,12,12,1,9,12,12,1,9,12,12,12,1,9,12,12,1,9,12,12,12,12,12,1,9,12,12,12,1,1,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,10,15,13},
{13,15,10,12,12,12,12,1,9,12,12,12,12,12,1,1,1,1,1,9,12,1,9,12,12,12,12,1,9,12,12,1,9,12,12,12,1,1,1,1,1,9,12,12,1,1,1,1,9,12,12,12,1,1,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,10,15,13},
{13,15,10,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,10,15,13},
{13,15,10,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,10,15,13},
{13,15,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,15,13},
{13,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,13},
{4,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,4} };




    cursor(x, y);
    for (int i = 0; i < 25; ++i) {

        for (int j = 0; j < 80; ++j) {

            colorBackground(Titulocomojugar[i][j]);
            cout << " ";
        }
        cout << endl;
        y++;
        cursor(x, y);
    }
    colorBackground(1);

}
void CuadroStatsPerdisteFlappyBird(int x, int y) {

    int Titulocomojugar[25][80] = { {12,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,12},
{13,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,13},
{13,15,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,15,13},
{13,15,2,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,2,15,13},
{13,15,2,12,12,12,12,12,12,12,13,13,13,13,5,12,12,12,12,12,13,5,12,12,12,12,13,12,12,12,13,5,12,13,13,13,5,12,12,12,12,13,13,13,13,5,13,5,12,12,12,12,13,5,12,13,13,13,5,12,13,13,13,13,5,12,12,12,12,12,12,12,12,12,12,12,12,2,15,13},
{13,15,2,12,12,12,12,12,12,13,5,12,12,12,12,12,12,12,12,13,12,13,5,12,12,12,13,13,12,13,13,5,12,13,5,12,12,12,12,12,12,13,5,12,13,5,13,5,12,12,12,12,13,5,12,13,5,12,12,12,13,12,12,13,5,12,12,12,12,12,12,12,12,12,12,12,12,2,15,13},
{13,15,2,12,12,12,12,12,13,5,12,12,12,12,12,12,12,12,12,13,12,13,5,12,12,12,13,5,13,12,13,5,12,13,5,12,12,12,12,12,12,13,5,12,13,5,12,13,5,12,12,13,5,12,12,13,5,12,12,12,13,12,12,13,5,12,12,12,12,12,12,12,12,12,12,12,12,2,15,13},
{13,15,2,12,12,12,12,12,13,5,12,12,13,13,5,12,12,12,13,5,12,12,13,5,12,12,13,5,12,12,13,5,12,13,13,5,5,12,12,12,12,13,5,12,13,5,12,13,5,12,12,13,5,12,12,13,13,13,5,12,13,12,12,13,5,12,12,12,12,12,12,12,12,12,12,12,12,2,15,13},
{13,15,2,12,12,12,12,12,13,5,5,12,12,12,13,5,12,12,13,13,13,13,13,5,5,12,13,5,12,12,13,5,12,13,5,12,12,12,12,12,12,13,5,12,13,5,12,12,13,5,13,5,12,12,12,13,5,12,12,12,13,12,13,5,12,12,12,12,12,12,12,12,12,12,12,12,12,2,15,13},
{13,15,2,12,12,12,12,12,12,13,13,5,5,12,13,5,12,13,5,12,12,12,12,13,5,12,13,5,12,12,13,5,12,13,5,12,12,12,12,12,12,13,5,12,13,5,12,12,13,13,13,5,12,12,12,13,5,12,12,12,13,12,12,13,5,12,12,12,12,12,12,12,12,12,12,12,12,2,15,13},
{13,15,2,12,12,12,12,12,12,12,13,13,13,13,5,12,12,13,5,12,12,12,12,13,5,12,13,5,12,12,13,5,12,13,13,13,5,12,12,12,12,13,13,13,13,5,12,12,12,13,5,12,12,12,12,13,13,13,5,12,13,12,12,13,13,5,12,12,12,12,12,12,12,12,12,12,12,2,15,13},
{13,15,2,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,2,15,13},
{13,15,2,12,12,12,12,1,1,1,9,12,12,12,1,9,12,12,1,9,12,1,9,12,12,12,12,1,9,1,1,1,1,1,9,12,1,1,1,1,1,9,12,12,1,1,1,1,9,12,12,12,1,1,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,2,15,13},
{13,15,2,12,12,12,12,1,12,12,1,9,12,12,1,9,12,12,1,9,12,1,1,9,12,12,12,1,9,12,12,1,9,12,12,12,1,9,12,12,1,9,12,12,1,9,12,12,12,12,12,12,1,1,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,2,15,13},
{13,15,2,12,12,12,12,1,12,12,12,1,9,12,1,9,12,12,1,9,12,1,9,1,9,12,12,1,9,12,12,1,9,12,12,12,1,9,12,12,1,9,12,12,1,9,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,2,15,13},
{13,15,2,12,12,12,12,1,12,12,12,1,9,12,1,9,12,12,1,9,12,1,9,12,1,9,12,1,9,12,12,1,9,12,12,12,1,9,12,12,1,9,12,12,1,9,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,2,15,13},
{13,15,2,12,12,12,12,1,12,12,1,9,12,12,1,9,12,12,1,9,12,1,9,12,12,1,9,1,9,12,12,1,9,12,12,12,1,9,12,12,1,9,12,12,1,1,1,1,9,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,2,15,13},
{13,15,2,12,12,12,12,1,1,1,9,12,12,12,1,9,12,12,1,9,12,1,9,12,12,12,1,1,9,12,12,1,9,12,12,12,1,9,12,12,1,9,12,12,12,12,12,1,9,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,2,15,13},
{13,15,2,12,12,12,12,1,9,12,12,12,12,12,1,9,9,9,1,9,12,1,9,12,12,12,12,1,9,12,12,1,9,12,12,12,1,9,12,12,1,9,12,12,12,12,12,1,9,12,12,12,1,1,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,2,15,13},
{13,15,2,12,12,12,12,1,9,12,12,12,12,12,1,1,1,1,1,9,12,1,9,12,12,12,12,1,9,12,12,1,9,12,12,12,1,1,1,1,1,9,12,12,1,1,1,1,9,12,12,12,1,1,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,2,15,13},
{13,15,2,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,2,15,13},
{13,15,2,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,2,15,13},
{13,15,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,15,13},
{13,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,13},
{4,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,4} };





    cursor(x, y);
    for (int i = 0; i < 25; ++i) {

        for (int j = 0; j < 80; ++j) {

            colorBackground(Titulocomojugar[i][j]);
            cout << " ";
        }
        cout << endl;
        y++;
        cursor(x, y);
    }
    colorBackground(1);

}
void CuadroRestart(int x, int y) {

    int Titulocomojugar[7][40] =  {{13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13},
{13,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,13},
{13,12,12,13,13,13,5,12,12,13,13,13,5,12,12,13,13,5,12,13,13,13,5,12,12,13,5,12,12,13,13,13,5,12,13,13,13,5,12,13},
{13,12,12,13,12,13,5,12,12,13,13,5,12,12,12,13,5,12,12,12,13,5,12,12,13,12,13,5,12,13,12,13,5,12,12,13,5,12,12,13},
{13,12,12,13,12,12,13,5,12,13,13,13,5,12,13,13,5,12,12,12,13,5,12,12,13,12,13,5,12,13,12,12,13,5,12,13,5,12,12,13},
{13,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,13},
{13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13}};




    cursor(x, y);
    for (int i = 0; i < 7; ++i) {

        for (int j = 0; j < 40; ++j) {

            colorBackground(Titulocomojugar[i][j]);
            cout << " ";
        }
        cout << endl;
        y++;
        cursor(x, y);
    }
    colorBackground(1);

}
void CuadroRestartBrillante(int x, int y) {

    int Titulocomojugar[7][40] = { {7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7},
{7,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,7},
{7,15,15,13,13,13,5,15,15,13,13,13,5,15,15,13,13,5,15,13,13,13,5,15,15,13,5,15,15,13,13,13,5,15,13,13,13,5,15,7},
{7,15,15,13,15,13,5,15,15,13,13,5,15,15,15,13,5,15,15,15,13,5,15,15,13,15,13,5,15,13,15,13,5,15,15,13,5,15,15,7},
{7,15,15,13,15,15,13,5,15,13,13,13,5,15,13,13,5,15,15,15,13,5,15,15,13,15,13,5,15,13,15,15,13,5,15,13,5,15,15,7},
{7,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,7},
{7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7} };




    cursor(x, y);
    for (int i = 0; i < 7; ++i) {

        for (int j = 0; j < 40; ++j) {

            colorBackground(Titulocomojugar[i][j]);
            cout << " ";
        }
        cout << endl;
        y++;
        cursor(x, y);
    }
    colorBackground(1);

}
void CuadroGoTest(int x, int y) {

    int Titulocomojugar[6][30] = { {4,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,4},
{13,5,5,1,1,1,5,5,1,1,1,5,5,1,1,1,5,1,1,5,1,1,5,1,1,1,5,5,13,13},
{13,5,5,1,5,5,5,5,1,5,1,5,5,5,1,5,5,1,1,5,1,5,5,5,1,5,5,5,5,13},
{13,5,5,1,5,5,1,5,1,5,1,5,5,5,1,5,5,1,5,5,5,1,5,5,1,5,5,5,5,13},
{13,5,5,1,1,1,1,5,1,1,1,5,5,5,1,5,5,1,1,5,1,1,5,5,1,5,5,5,5,13},
{4,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,4} };




    cursor(x, y);
    for (int i = 0; i < 6; ++i) {

        for (int j = 0; j < 30; ++j) {

            colorBackground(Titulocomojugar[i][j]);
            cout << " ";
        }
        cout << endl;
        y++;
        cursor(x, y);
    }
    colorBackground(1);

}
void CuadroGoTestBrillante(int x, int y) {

    int Titulocomojugar[6][30] = { {4,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,4},
{7,15,15,1,1,1,15,15,1,1,1,15,15,1,1,1,15,1,1,15,1,1,15,1,1,1,15,15,15,7},
{7,15,15,1,15,15,15,15,1,15,1,15,15,15,1,15,15,1,1,15,1,15,15,15,1,15,15,15,15,7},
{7,15,15,1,15,15,1,15,1,15,1,15,15,15,1,15,15,1,15,15,15,1,15,15,1,15,15,15,15,7},
{7,15,15,1,1,1,1,15,1,1,1,15,15,15,1,15,15,1,1,15,1,1,15,15,1,15,15,15,15,7},
{4,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,4} };





    cursor(x, y);
    for (int i = 0; i < 6; ++i) {

        for (int j = 0; j < 30; ++j) {

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