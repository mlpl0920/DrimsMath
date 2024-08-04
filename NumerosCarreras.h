#ifndef NumerosCarreras_h
#define NumerosCarreras_h

#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <Windows.h>
#include <thread>
#include "COLORES.h"
#include "cursor.h"


using namespace std;
using namespace System;
void Numero0Carreras(int x, int y) {

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
void Numero1Carreras(int x, int y) {

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
void Numero2Carreras(int x, int y) {

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
void Numero3Carreras(int x, int y) {

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
void Numero4Carreras(int x, int y) {

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
void Numero5Carreras(int x, int y) {

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
void Numero6Carreras(int x, int y) {

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
void Numero7Carreras(int x, int y) {

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
void Numero8Carreras(int x, int y) {

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
void Numero9Carreras(int x, int y) {

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







void Numero0Carreras_Brillante(int x, int y) {

    int Titulocomojugar[8][7] = { {1,1,1,1,1,1,9},
{1,9,15,15,15,1,9},
{1,9,15,15,15,1,9},
{1,9,15,15,15,1,9},
{1,9,15,15,15,1,9},
{1,9,15,15,15,1,9},
{1,9,15,15,15,1,9},
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
void Numero1Carreras_Brillante(int x, int y) {

    int Titulocomojugar[8][7] = {
 {15,15,15,1,9,15,15},
{15,15,1,1,9,15,15},
{15,1,9,1,9,15,15},
{1,9,15,1,9,15,15},
{15,15,15,1,9,15,15},
{15,15,15,1,9,15,15},
{15,15,15,1,9,9,9},
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
void Numero2Carreras_Brillante(int x, int y) {

    int Titulocomojugar[8][7] = {
{15,15,1,1,9,15,15},
{15,1,9,9,1,9,15},
{1,9,15,15,1,9,15},
{15,15,15,15,1,9,15},
{15,15,15,1,9,15,15},
{15,15,1,9,15,15,15},
{15,1,9,15,15,15,15},
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
void Numero3Carreras_Brillante(int x, int y) {

    int Titulocomojugar[8][7] = {
{15,15,1,1,9,15,15},
{15,1,1,9,1,1,9},
{15,1,9,15,1,1,9},
{15,15,15,15,1,9,15},
{15,15,1,1,9,15,15},
{15,15,15,15,1,1,9},
{15,1,1,15,1,1,9},
{15,15,1,1,1,9,15} };



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
void Numero4Carreras_Brillante(int x, int y) {

    int Titulocomojugar[8][7] = { {15,15,15,15,1,9,15},
{15,15,15,1,1,9,15},
{15,15,1,9,1,9,15},
{15,1,9,15,1,9,15},
{1,9,15,15,1,9,9},
{1,1,1,1,1,1,1},
{15,15,15,15,1,9,15},
{15,15,15,15,1,9,15} };




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
void Numero5Carreras_Brillante(int x, int y) {

    int Titulocomojugar[8][7] = { {1,1,1,1,1,1,1},
{1,9,9,9,9,9,9},
{1,9,15,15,15,15,15},
{1,1,1,1,1,1,1},
{15,15,15,15,15,9,1},
{15,15,15,15,15,9,1},
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
void Numero6Carreras_Brillante(int x, int y) {

    int Titulocomojugar[8][7] = { {15,15,1,1,1,1,1},
{15,1,1,1,1,1,1},
{1,1,15,15,15,15,15},
{1,1,1,1,1,1,1},
{1,1,9,9,9,1,1},
{1,1,9,15,15,1,1},
{1,1,9,15,15,1,1},
{15,1,1,1,1,1,1} };





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
void Numero7Carreras_Brillante(int x, int y) {

    int Titulocomojugar[8][7] = { {1,1,1,1,1,1,1},
{9,9,9,9,9,9,1},
{15,15,15,15,15,1,9},
{15,15,15,15,1,1,9},
{15,15,15,1,1,9,15},
{15,15,1,1,9,15,15},
{15,1,1,9,15,15,15},
{15,1,9,15,15,15,15} };





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
void Numero8Carreras_Brillante(int x, int y) {

    int Titulocomojugar[8][7] = { {15,1,1,1,1,1,15},
{1,9,15,15,15,15,1},
{1,9,9,9,9,9,1},
{1,1,1,1,1,1,1},
{1,9,15,15,15,15,1},
{1,9,15,15,15,15,1},
{1,9,9,9,9,9,1},
{15,1,1,1,1,1,15} };





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
void Numero9Carreras_Brillante(int x, int y) {

    int Titulocomojugar[8][7] = { {15,1,1,1,1,1,15},
{1,9,9,9,9,9,1},
{1,9,15,15,15,15,1},
{1,1,1,1,1,1,1},
{15,15,15,15,15,15,1},
{15,15,15,15,15,15,1},
{1,15,15,15,15,15,1},
{15,1,1,1,1,1,15} };





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

