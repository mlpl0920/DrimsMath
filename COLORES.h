#ifndef COLORES_h
#define COLORES_h

#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <Windows.h>

using namespace std;
using namespace System;

void colorBackground(int c)
{
    switch (c)
    {
    case 1: Console::BackgroundColor = ConsoleColor::Black; break;
    case 2: Console::BackgroundColor = ConsoleColor::DarkBlue; break;
    case 3: Console::BackgroundColor = ConsoleColor::DarkGreen; break;
    case 4: Console::BackgroundColor = ConsoleColor::DarkCyan; break;
    case 5: Console::BackgroundColor = ConsoleColor::DarkRed; break;
    case 6: Console::BackgroundColor = ConsoleColor::DarkMagenta; break;
    case 7: Console::BackgroundColor = ConsoleColor::DarkYellow; break;
    case 8: Console::BackgroundColor = ConsoleColor::Gray; break;
    case 9: Console::BackgroundColor = ConsoleColor::DarkGray; break;
    case 10: Console::BackgroundColor = ConsoleColor::Blue; break;
    case 11: Console::BackgroundColor = ConsoleColor::Green; break;
    case 12: Console::BackgroundColor = ConsoleColor::Cyan; break;
    case 13: Console::BackgroundColor = ConsoleColor::Red; break;
    case 14: Console::BackgroundColor = ConsoleColor::Magenta; break;
    case 15: Console::BackgroundColor = ConsoleColor::Yellow; break;
    case 16: Console::BackgroundColor = ConsoleColor::White; break;
    }
}
void color(int c) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
void colorA(int textColor, int backgroundColor) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (backgroundColor << 4) | textColor);
}
#endif