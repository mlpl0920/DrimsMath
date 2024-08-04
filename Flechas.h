#ifndef Flechas_h
#define Flechas_h
#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <Windows.h>
#include "COLORES.h"
#include "cursor.h"
#include "Principal_FlappyBird.h"
#include "MenuPrincipal.h"
#include "FuncionesMenu.h"

using namespace std;
using namespace System;


void FuncionFlechas() {
	int opcionActual = 1;
	int paginaActual = 1;
	while (true) {
		if (_kbhit()) {
			char teclita = _getch();
			
			if (paginaActual == 1 && opcionActual==1 && teclita == 'd') {
				opcionActual = 2;
				FlechaComoJugarDerecha_Brillante(118,2);
				FlechaComoJugarIzquierda(8, 2);

			}
			else if (paginaActual == 1 && opcionActual == 2 && teclita == 'a') {
				opcionActual = 1;
				FlechaComoJugarIzquierda_Brillante(8, 2);
				FlechaComoJugarDerecha(118, 2);
			}
			else if (paginaActual == 1 && opcionActual==1 && teclita=='a') {
				FlechaComoJugarDerecha(118, 2);
				FlechaComoJugarIzquierda_Brillante(8, 2);
			}
			else if (paginaActual == 1 && opcionActual == 2 && teclita == 'd') {
				FlechaComoJugarDerecha_Brillante(118, 2);
				FlechaComoJugarIzquierda(8, 2);
			}
			else if (paginaActual == 1 && (teclita == 's' || teclita == 'w')) {
				FlechaComoJugarDerecha(118, 2);
				FlechaComoJugarIzquierda(8, 2);
			}
			
			if (paginaActual == 1 && opcionActual==2 && teclita == char(13)) {
				
				system("cls");
				opcionActual = 1;
				paginaActual = 2;
				MenuPrincipalJuego_ComoJugar();
				TituloComoJugar(53, 2);
				
				FlechaComoJugarIzquierda_Brillante(8, 2);
				TextoComoJugarParte2();

			}
			else if (paginaActual == 2 && opcionActual == 1 && teclita == char(13)) {

				system("cls");
				paginaActual = 1;
				MenuPrincipalJuego_ComoJugar();
				TituloComoJugar(53, 2);
				FlechaComoJugarDerecha(118, 2);
				FlechaComoJugarIzquierda(8, 2);
				TextoComojugarParte1();

			}

			else if (paginaActual == 1 && opcionActual== 1 && teclita == char(13)) {
				break;

			}
		}
	}
}
#endif
