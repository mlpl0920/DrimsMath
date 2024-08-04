#ifndef FuncionesMenu_h
#define FuncionesMenu_h
#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <Windows.h>
#include "COLORES.h"
#include "cursor.h"
#include "MenuPrincipal.h"
#include "ActualizarMenup.h"
#include "Flechas.h"
#include "ParaHito2.h"
#include "PrincipalCarreras.h"
#include "PrincipalGusanito.h"
#include "PrincipalLaberinto.h"
#include "Escenarios_Historia.h"
#include "FuncionesHistoria.h"
#include "PasillosCastillo.h"

using namespace std;
using namespace System;


void ActualizarMenuPrincipal() {
    int opcionActual = 1;
    actualizarMenu(opcionActual);

    while (true) {
        if (_kbhit()) {
         
            char tecla = _getch();
            if (tecla == 's') {
                if (opcionActual == 1) {
                    opcionActual = 2;
                }
                else if (opcionActual == 2) {
                    opcionActual = 3;
                }
                actualizarMenu(opcionActual);
            }
            else if (tecla == 'w') {
                if (opcionActual == 2) {
                    opcionActual = 1;
                }
                else if (opcionActual == 3) {
                    opcionActual = 2;
                }
                actualizarMenu(opcionActual);
            }


            //al apretar enter, a que funcion entrar

            if (opcionActual == 1 && tecla == char(13)) {
              
               MenuPersonalizacionHistoria();
                break;//importante break;
            }

            else if (opcionActual == 2 && tecla == char(13)) {
                system("cls");
                MenuPrincipalJuego_ComoJugar();
                TituloComoJugar(53, 2);
                TextoComojugarParte1();
                FlechaComoJugarDerecha(118, 2);
                FlechaComoJugarIzquierda(8, 2);
                FuncionFlechas();
                break;

            }
            else if (opcionActual == 3 && tecla == char(13)) {
                system("cls");
                cout << "Aprete la x arriba a la derecha para salir...";
                
                
            }


        }
        Sleep(50);
    }

}

void MenuPrincipalTodo() {
    MenuPrincipal();
    Titulo(2, 2);
    BotonJugar(2, 20);
    BotonComoJugar(2, 28);
    BotonSalir(2, 36);
}


#endif
