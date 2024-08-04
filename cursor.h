#ifndef cursor_h
#define cursor_h

#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <Windows.h>
#include "COLORES.h"

using namespace std;
using namespace System;

void cursor(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void textoPosicion(int x, int y, string texto) {
    Console::SetCursorPosition(x, y);
    color(4);
    cout << texto;
    color(16);
}

#endif 
