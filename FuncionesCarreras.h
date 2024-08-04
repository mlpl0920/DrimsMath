#ifndef FuncionesCarreras_h
#define FuncionesCarreras_h
#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <Windows.h>
#include "COLORES.h"
#include "cursor.h"
#include "EscenarioCarreras.h"
#include "NumerosCarreras.h"

using namespace std;
using namespace System;

void PuntuacionCarreras(int n, int x, int y) {
    switch (n)
    {
    case 0: Numero0Carreras(x, y);
        break;
    case 1: Numero1Carreras(x, y);
        break;
    case 2: Numero2Carreras(x, y);
        break;
    case 3: Numero3Carreras(x, y);
        break;
    case 4: Numero4Carreras(x, y);
        break;
    case 5: Numero5Carreras(x, y);
        break;
    case 6: Numero6Carreras(x, y);
        break;
    case 7: Numero7Carreras(x, y);
        break;
    case 8: Numero8Carreras(x, y);
        break;
    case 9: Numero9Carreras(x, y);
        break;
    }
}
void ordenarTresNumeros(double a, double b, double c, double& menor, double& medio, double& mayor) {
    if (a < b) {
        if (a < c) {
            menor = a;
            if (b < c) {
                medio = b;
                mayor = c;
            }
            else {
                medio = c;
                mayor = b;
            }
        }
        else { // c <= a
            menor = c;
            medio = a;
            mayor = b;
        }
    }
    else { // b <= a
        if (b < c) {
            menor = b;
            if (a < c) {
                medio = a;
                mayor = c;
            }
            else {
                medio = c;
                mayor = a;
            }
        }
        else { // c <= b
            menor = c;
            medio = b;
            mayor = a;
        }
    }
}

void ActualizarFlechitasCarreritas(int PosicionActual) {
    switch (PosicionActual)
    {
    case 1:
        Cuadro1UnNumero2Brillante(138, 0);
        Cuadro2UnNumero2(138, 11);
        Cuadro3UnNumero2(138, 22);
        CuadroUnNumero2Provisional(138, 34);

        Numero2Carreras_Brillante(143, 2);
        Numero3Carreras(143, 13);
        Numero5Carreras(143, 24);
        Numero7Carreras(143, 35);
        break;
    case 2:
        Cuadro1UnNumero2(138, 0);
        Cuadro2UnNumero2Brillante(138, 11);
        Cuadro3UnNumero2(138, 22);
        CuadroUnNumero2Provisional(138, 34);

        Numero2Carreras(143, 2);
        Numero3Carreras_Brillante(143, 13);
        Numero5Carreras(143, 24);
        Numero7Carreras(143, 35);
        break;
    case 3:
        Cuadro1UnNumero2(138, 0);
        Cuadro2UnNumero2(138, 11);
        Cuadro3UnNumero2Brillante(138, 22);
        CuadroUnNumero2Provisional(138, 34);

        Numero2Carreras(143, 2);
        Numero3Carreras(143, 13);
        Numero5Carreras_Brillante(143, 24);
        Numero7Carreras(143, 35);
        break;
    case 4:
        Cuadro1UnNumero2(138, 0);
        Cuadro2UnNumero2(138, 11);
        Cuadro3UnNumero2(138, 22);
        CuadroUnNumero2ProvisionalBrillante(138, 34);

        Numero2Carreras(143, 2);
        Numero3Carreras(143, 13);
        Numero5Carreras(143, 24);
        Numero7Carreras_Brillante(143, 35);
        break;
    }
}

int GenerarNumeroRandomCarreras() {
    int NumeroCarrera[7] = { 14,35,21,15,9,6,10 };
    int returnar = rand() % 6; 
    return NumeroCarrera[returnar];
}

bool SonDiferentes(int a, int b, int c) {
    return (a != b) && (a != c) && (b != c);
}

void ActualizarNumeros(int numeroSeleccionadoCarreritas, int& numero1, int& numero2, int& numero3, bool& Valido) {
    
    if (numero1 % numeroSeleccionadoCarreritas == 0 || numero2 % numeroSeleccionadoCarreritas == 0 || numero3 % numeroSeleccionadoCarreritas == 0) {
        Valido = true;
    }
    if (Valido) {
        int aux1 = 0, aux2 = 0;
        if (numero1 % numeroSeleccionadoCarreritas == 0) {


            numero1 /= numeroSeleccionadoCarreritas;
            if (numero1 > 10) {
                aux1 = numero1 % 10;
                aux2 = numero1 / 10;
                Cuadro2Numeros(0, 0);
                PuntuacionCarreras(aux2, 8, 2);
                PuntuacionCarreras(aux1, 18, 2);
            }
            else {
                Cuadro2Numeros(0, 0);
                PuntuacionCarreras(numero1, 14, 2);
            }

        }
        if (numero2 % numeroSeleccionadoCarreritas == 0) {

            numero2 /= numeroSeleccionadoCarreritas;
            if (numero2 > 10) {
                aux1 = numero2 % 10;
                aux2 = numero2 / 10;
                Cuadro2Numeros(39, 0);
                PuntuacionCarreras(aux2, 52, 2);
                PuntuacionCarreras(aux1, 60, 2);
            }
            else {
                Cuadro2Numeros(39, 0);
                PuntuacionCarreras(numero2, 54, 2);
            }
        }
        if (numero3 % numeroSeleccionadoCarreritas == 0) {

            numero3 /= numeroSeleccionadoCarreritas;
            if (numero3 > 10) {
                aux1 = numero3 % 10;
                aux2 = numero3 / 10;
                PuntuacionCarreras(aux2, 85, 2);
                PuntuacionCarreras(aux1, 95, 2);
                Cuadro2Numeros(78, 0);
            }
            else {
                Cuadro2Numeros(78, 0);
                PuntuacionCarreras(numero3, 90, 2);
            }
        }
    }
}

void LimpiarAreaCarreras(int x, int y, int ancho, int alto) {
    for (int i = 0; i < alto; ++i) {
        Console::SetCursorPosition(x, y + i);
        for (int j = 0; j < ancho; ++j) {
            colorBackground(9);
            cout << " ";
        }
    }
}

void MoverCarroCentro(double& yC2) {
    
    
    LimpiarAreaCarreras(49, yC2, 20, 7);
 
    yC2-=5;

    Carro_Carreras2(49, yC2);
    

}
void MoverCarros(double& yC1, double& yC3) {

    LimpiarAreaCarreras(11, yC1, 20, 7);
    LimpiarAreaCarreras(85, yC3, 20, 7);


        yC1 -= 0.09;
        yC3 -= 0.08;


    Carro_Carreras1(11, yC1);
    Carro_Carreras3(85, yC3);
    

}

void generarInterfazCarreras() {
    bool mantener = true;
    while (mantener) {
        bool Valido = false;
        bool victoria = false;
        bool juego = true;
        double primerlugar = 0, segundolugar = 0, tercerlugar = 0;
        double errores;
        FondoCelestito();
        Cuadro2Numeros(0, 0);
        Cuadro2Numeros(39, 0);
        Cuadro2Numeros(78, 0);
        CuadroUnNumero(117, 0);
        Pista(0, 12);
        Pista2(80, 12);
        Pista2(98, 12);
        PistaCarro1(0, 15);
        PistaCarro1_2(0, 30);
        PistaCarro2(39, 15);
        PistaCarro2_2(39, 30);
        PistaCarro3(78, 15);
        PistaCarro3_2(78, 30);

        double yC1 = 33, yC2 = 33, yC3 = 33;
        int aux1, aux2;

        int PrimerNumero, SegundoNumero, TercerNumero;
        do {
            PrimerNumero = GenerarNumeroRandomCarreras();
            SegundoNumero = GenerarNumeroRandomCarreras();
            TercerNumero = GenerarNumeroRandomCarreras();
        } while (!SonDiferentes(PrimerNumero, SegundoNumero, TercerNumero));

        if (PrimerNumero > 10) {
            aux1 = PrimerNumero % 10;
            aux2 = PrimerNumero / 10;
            PuntuacionCarreras(aux2, 8, 2);
            PuntuacionCarreras(aux1, 18, 2);
        }
        else {
            PuntuacionCarreras(PrimerNumero, 14, 2);
        }
        if (SegundoNumero > 10) {
            aux1 = SegundoNumero % 10;
            aux2 = SegundoNumero / 10;
            PuntuacionCarreras(aux2, 52, 2);
            PuntuacionCarreras(aux1, 60, 2);
        }
        else {
            PuntuacionCarreras(SegundoNumero, 54, 2);
        }
        if (TercerNumero > 10) {
            aux1 = TercerNumero % 10;
            aux2 = TercerNumero / 10;
            PuntuacionCarreras(aux2, 85, 2);
            PuntuacionCarreras(aux1, 95, 2);
        }
        else {
            PuntuacionCarreras(TercerNumero, 90, 2);
        }

        Cuadro1UnNumero2(138, 0);
        Cuadro2UnNumero2(138, 11);
        Cuadro3UnNumero2(138, 22);
        CuadroUnNumero2Provisional(138, 34);

        Numero2Carreras(143, 2);
        Numero3Carreras(143, 13);
        Numero5Carreras(143, 24);
        Numero7Carreras(143, 35);

        int posicionActual = 1;
        ActualizarFlechitasCarreritas(posicionActual);

        int guardarSeleccion;
        int tam = 0;
        int ArregloGuardarSeleccion[4];
        Carro_Carreras2(49, yC2);
        while (juego) {
            if (_kbhit()) {
                char ActualOpcionCarreritas = _getch();
                if (posicionActual == 1 && ActualOpcionCarreritas == 's') {
                    posicionActual = 2;
                    ActualizarFlechitasCarreritas(posicionActual);
                }
                else if (posicionActual == 2 && ActualOpcionCarreritas == 's') {
                    posicionActual = 3;
                    ActualizarFlechitasCarreritas(posicionActual);
                }
                else if (posicionActual == 3 && ActualOpcionCarreritas == 's') {
                    posicionActual = 4;
                    ActualizarFlechitasCarreritas(posicionActual);
                }
                else if (posicionActual == 4 && ActualOpcionCarreritas == 'w') {
                    posicionActual = 3;
                    ActualizarFlechitasCarreritas(posicionActual);
                }
                else if (posicionActual == 3 && ActualOpcionCarreritas == 'w') {
                    posicionActual = 2;
                    ActualizarFlechitasCarreritas(posicionActual);

                }
                else if (posicionActual == 2 && ActualOpcionCarreritas == 'w') {
                    posicionActual = 1;
                    ActualizarFlechitasCarreritas(posicionActual);
                }

                if (posicionActual == 1 && ActualOpcionCarreritas == char(13)) {
                    guardarSeleccion = 2;
                    Numero2Carreras(122, 2);
                    ActualizarNumeros(guardarSeleccion, PrimerNumero, SegundoNumero, TercerNumero, Valido);
                    if (Valido) {
                        ArregloGuardarSeleccion[tam] = guardarSeleccion;
                        tam++;
                    }
                    else {
                        errores++;
                    }
                }
                else if (posicionActual == 2 && ActualOpcionCarreritas == char(13)) {
                    guardarSeleccion = 3;
                    Numero3Carreras(122, 2);
                    ActualizarNumeros(guardarSeleccion, PrimerNumero, SegundoNumero, TercerNumero, Valido);
                    if (Valido) {
                        ArregloGuardarSeleccion[tam] = guardarSeleccion;
                        tam++;
                    }
                    else {
                        errores++;
                    }
                }
                else if (posicionActual == 3 && ActualOpcionCarreritas == char(13)) {
                    guardarSeleccion = 5;
                    Numero5Carreras(122, 2);
                    ActualizarNumeros(guardarSeleccion, PrimerNumero, SegundoNumero, TercerNumero, Valido);
                    if (Valido) {
                        ArregloGuardarSeleccion[tam] = guardarSeleccion;
                        tam++;
                    }
                    else {
                        errores++;
                    }

                }
                else if (posicionActual == 4 && ActualOpcionCarreritas == char(13)) {
                    guardarSeleccion = 7;
                    Numero7Carreras(122, 2);
                    ActualizarNumeros(guardarSeleccion, PrimerNumero, SegundoNumero, TercerNumero, Valido);
                    if (Valido) {
                        ArregloGuardarSeleccion[tam] = guardarSeleccion;
                        tam++;
                    }
                    else {
                        errores++;
                    }
                }
                if (PrimerNumero == 1 && SegundoNumero == 1 && TercerNumero == 1) {
                    MoverCarroCentro(yC2);
                    victoria = true;
                    break;
                }
            }

            if (Valido) {
                MoverCarroCentro(yC2);
            }
            MoverCarros(yC1, yC3);
            Sleep(50);
            if (yC1 <= 15 || yC3 <= 15) {
                break;
            }
            if (errores == 5) {
                victoria = false;
            }


            Valido = false;
        }

        ordenarTresNumeros(yC1, yC2, yC3, primerlugar, segundolugar, tercerlugar);

        system("cls");
        FondoCelestito();
        ArribaStats(40, 0);
        if (victoria) {
            GanadorStats_Carreritas(47, 3);

        }
        else {
            PerdedorStats_Carreritas(47, 3);
        }
        CuadroRestart_Carreritas(1, 1); CuadroGoTest_Carreritas(120, 35);
        Numero1Carreras(45, 11); PuntuacionStats_Carreritas(54, 11);
        Numero2Carreras(45, 21); PuntuacionStats_Carreritas(54, 21);
        Numero3Carreras(45, 31); PuntuacionStats_Carreritas(54, 31);
        if (primerlugar == yC1) {
            Carro_Carreras1(95, 12);
        }
        else if (primerlugar == yC2) {
            Carro_Carreras2(95, 12);
        }
        else if (primerlugar == yC3) {
            Carro_Carreras3(95, 12);
        }
        if (segundolugar == yC1) {
            Carro_Carreras1(95, 22);
        }
        else if (segundolugar == yC2) {
            Carro_Carreras2(95, 22);
        }
        else if (segundolugar == yC3) {
            Carro_Carreras3(95, 22);
        }
        if (tercerlugar == yC1) {
            Carro_Carreras1(95, 32);
        }
        else if (tercerlugar == yC2) {
            Carro_Carreras2(95, 32);
        }
        else if (tercerlugar == yC3) {
            Carro_Carreras3(95, 32);
        }
        int opcionActualCarreritas = 1;
        while (true) {
            char tecla = _getch();

            if (tecla == 's') {
                opcionActualCarreritas = 2;
                CuadroRestartBrillante_Carreritas(1, 1);
                CuadroGoTest_Carreritas(120, 35);
            }
            else if (tecla == 'w') {
                opcionActualCarreritas = 1;
                CuadroRestart_Carreritas(1, 1);
                CuadroGoTest_Carreritas(120, 35);
            }
            else if (opcionActualCarreritas == 2 && tecla == 'd') {
                opcionActualCarreritas = 3;
                CuadroGoTestBrillante_Carreritas(120, 35);
                CuadroRestart_Carreritas(1, 1);
            }
            else if (opcionActualCarreritas == 3 && tecla == 'a') {
                opcionActualCarreritas = 2;
                CuadroGoTest_Carreritas(120, 35);
                CuadroRestartBrillante_Carreritas(1, 1);
            }

            if (opcionActualCarreritas == 3 && tecla==char(13)) {
                mantener = false;
                break;
            }
            else if (opcionActualCarreritas == 2 && tecla == char(13)) {
                break;
            }
        }

    }
}

#endif
