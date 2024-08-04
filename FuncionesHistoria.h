#ifndef FuncionesLaberinto_h
#define FuncionesLaberinto_h
#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <Windows.h>
#include "COLORES.h"
#include "cursor.h"
#include "MenuPrincipal.h"
#include "Escenarios_Historia.h"
#include "PasillosCastillo.h"



using namespace std;
using namespace System;
void actualizarMenu_Historia(int opcion) {

    switch (opcion) {
    case 1:
        BotonJugar_Brillante_Historia(64, 17);
        BotonCustom_Historia(64, 26);
        BotonSalir_Historia(64, 35);
        break;
    case 2:
        BotonJugar_Historia(64, 17);
        BotonCustom_Brillante_Historia(64, 26);
        BotonSalir_Historia(64, 35);
        break;
    case 3:
        BotonJugar_Historia(64, 17);
        BotonCustom_Historia(64, 26);
        BotonSalir_Brillante_Historia(64, 35);
        break;
    }
}
void ActualizarMenuPrincipal_Historia() {
    int opcionActual_Historia = 1;
    actualizarMenu_Historia(opcionActual_Historia);

    while (true) {
        if (_kbhit()) {

            char tecla = _getch();
            if (tecla == 's') {
                if (opcionActual_Historia == 1) {
                    opcionActual_Historia = 2;
                }
                else if (opcionActual_Historia == 2) {
                    opcionActual_Historia = 3;
                }
                actualizarMenu_Historia(opcionActual_Historia);
            }
            else if (tecla == 'w') {
                if (opcionActual_Historia == 2) {
                    opcionActual_Historia = 1;
                }
                else if (opcionActual_Historia == 3) {
                    opcionActual_Historia = 2;
                }
                actualizarMenu_Historia(opcionActual_Historia);
            }


            //al apretar enter, a que funcion entrar

            if (opcionActual_Historia == 1 && tecla == char(13)) {
                Vereda1();
                Sleep(1000);
                Vereda2();
                Sleep(1000);
                Vereda3();
                Sleep(1000);
                Colegio();
                Sleep(1000);
                SalondeClases();
                Sleep(5000);
                principalPasilloCastillo();
                _getch();
                break;//importante break;
            }

            else if (opcionActual_Historia == 2 && tecla == char(13)) {
                system("cls");
                MenuPrincipalJuego_ComoJugar();
                TituloComoJugar(53, 2);
                TextoComojugarParte1();
                FlechaComoJugarDerecha(118, 2);
                FlechaComoJugarIzquierda(8, 2);
                FuncionFlechas();
                break;

            }
            else if (opcionActual_Historia == 3 && tecla == char(13)) {
                system("cls");
                cout << "Aprete la x arriba a la derecha para salir...";


            }


        }
        Sleep(50);
    }

}
void MenuPersonalizacionHistoria() {
    system("cls");
    PersonajeCaeDormido();
    Zzzzzz(52, 20);
    Zzzzzz(58, 25);
    Sleep(5000);
    HoraDeDespertar();
    Sleep(5000);
    CuartoPersonajeDurmiendo();
    Sleep(1000);
    CuartoPersonajeSentado();
    Sleep(1000);
    CuartoPersonajePreocupado();
    Sleep(1000);
    CuartoPersonajeParado();
    Sleep(1000);
    CuartoPersonajeVacio();
    
    BotonSalir_Historia(64, 35);
    BotonCustom_Historia(64, 26);
    BotonJugar_Historia(64, 17);
    ActualizarMenuPrincipal_Historia();

    
 
}

void PrincipalHistoria(){

}







#endif
