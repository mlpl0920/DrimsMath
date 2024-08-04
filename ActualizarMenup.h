#ifndef ActualizarMenup_h
#define ActualizarMenup_h
#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <Windows.h>
#include "COLORES.h"
#include "cursor.h"
#include "MenuPrincipal.h"


using namespace std;
using namespace System;



void actualizarMenu(int opcion) {

    switch (opcion) {
    case 1:
        BotonJugar_Brillante(2, 20);
        BotonComoJugar(2, 28);
        BotonSalir(2, 36);
        break;
    case 2:
        BotonJugar(2, 20);
        BotonComoJugar_Brillante(2, 28);
        BotonSalir(2, 36);
        break;
    case 3:
        BotonJugar(2, 20);
        BotonComoJugar(2, 28);
        BotonSalir_Brillante(2, 36);
        break;
    }
}



void TextoComojugarParte1() {
    Console::SetCursorPosition(7,9);
    
    colorA(15,8);
    
    int i = 10;
    cout << "Introduccion" ; Console::SetCursorPosition(7,i); i++;
    cout << "¡Bienvenido a la aventura educativa mas emocionante! En este juego, ayudaras a nuestro protagonista a superar sus miedos y prepararse para el"; Console::SetCursorPosition(7, i); i++;
    cout << " examen escolar a traves de una serie de desafios interactivos y minijuegos educativos.Aqui aprenderas las reglas y controles basicos "; Console::SetCursorPosition(7, i); i++;
    cout<<"para disfrutar al maximo de esta experiencia."; Console::SetCursorPosition(7, i); i++;
    cout ; Console::SetCursorPosition(7,i); i++;
    cout << "Controles Basicos" ; Console::SetCursorPosition(7,i); i++;
    cout << "- Movimiento: Utiliza las teclas de flechas (w, s, a, d) para mover al personaje en las distintas areas del juego." ; Console::SetCursorPosition(7,i); i++;
    cout << "- Interaccion: Presiona la tecla 'E' para interactuar con objetos y personajes en el entorno." ; Console::SetCursorPosition(7,i); i++;
    cout << "- Menu de Pausa: Pulsa 'Esc' para pausar el juego y acceder a las opciones del menu (guardar, cargar, ajustes, salir)." ; Console::SetCursorPosition(7,i); i++;
    cout ; Console::SetCursorPosition(7,i); i++;
    cout << "Menu Principal" ; Console::SetCursorPosition(7,i); i++;
    cout << "Al iniciar el juego, podras:" ; Console::SetCursorPosition(7,i); i++;
    cout << "- Personalizar tu personaje: Cambia la ropa y el estilo del protagonista." ; Console::SetCursorPosition(7,i); i++;
    cout << "- Seleccionar la dificultad: Elige entre facil, medio y dificil." ; Console::SetCursorPosition(7,i); i++;
    cout << "- Ver creditos: Conoce al equipo de desarrollo del juego." ; Console::SetCursorPosition(7,i); i++;
    cout ; Console::SetCursorPosition(7,i); i++;
    cout << "Animaciones Iniciales" ; Console::SetCursorPosition(7,i); i++;
    cout << "1. Despertar y Personalizacion: Observa como el personaje se prepara para el dia y personalizalo." ; Console::SetCursorPosition(7,i); i++;
    cout << "2. Camino al Colegio: Disfruta de la historia mientras el protagonista se dirige al colegio y recibe un mensaje inesperado sobre el examen." ; Console::SetCursorPosition(7,i); i++;
    cout ; Console::SetCursorPosition(7,i); i++;
    cout << "Tutorial" ; Console::SetCursorPosition(7,i); i++;
    cout << "Al llegar al colegio, un breve tutorial te enseñara:" ; Console::SetCursorPosition(7,i); i++;
    cout << "- Como moverte por el mapa." ; Console::SetCursorPosition(7,i); i++;
    cout << "- Como interactuar con personajes y objetos." ; Console::SetCursorPosition(7,i); i++;
    cout ; Console::SetCursorPosition(7,i); i++;
    cout << "Exploracion del Castillo" ; Console::SetCursorPosition(7,i); i++;
    cout << "Una vez que el personaje cae en un sueño profundo, apareceras frente a un castillo misterioso con"; Console::SetCursorPosition(7, i); i++;
    cout<<"cuatro puertas, cada una, representando un tema del examen."; Console::SetCursorPosition(7, i); i++;
    cout ; Console::SetCursorPosition(7,i); i++;
   
    

}


void TextoComoJugarParte2() {
    Console::SetCursorPosition(7, 9);
    colorA(15, 8);

    int i = 10;
    colorA(15, 8);
    cout << "Puertas Tematicas" ; Console::SetCursorPosition(7,i); i++;
    cout << "Cada puerta te llevara a una serie de minijuegos y animaciones educativas:" ; Console::SetCursorPosition(7,i); i++;
    cout ; Console::SetCursorPosition(7,i); i++;
    cout << "1. Factorizacion:" ; Console::SetCursorPosition(7,i); i++;
    cout << "- Animacion: Introduccion a la factorizacion." ; Console::SetCursorPosition(7,i); i++;
    cout << "- Minijuego 1: Resuelve ejercicios de factorizacion para evitar ser aplastado." ; Console::SetCursorPosition(7,i); i++;
    cout << "- Minijuego 2: Navega por un laberinto resolviendo problemas de factorizacion." ; Console::SetCursorPosition(7,i); i++;
    cout ; Console::SetCursorPosition(7,i); i++;
    cout << "2. Numeros Primos:" ; Console::SetCursorPosition(7,i); i++;
    cout << "- Animacion: Explicacion de los numeros primos." ; Console::SetCursorPosition(7,i); i++;
    cout << "- Minijuego 1: Un juego tipo Space Invaders donde disparas a numeros primos." ; Console::SetCursorPosition(7,i); i++;
    cout << "- Minijuego 2: Un juego tipo Flappy Bird con tubos numerados por los que debes pasar." ; Console::SetCursorPosition(7,i); i++;
    cout ; Console::SetCursorPosition(7,i); i++;
    cout << "3. MCM y MCD:" ; Console::SetCursorPosition(7,i); i++;
    cout << "- Animacion: Teoria y ejemplos de MCM y MCD." ; Console::SetCursorPosition(7,i); i++;
    cout << "- Minijuego 1: Un juego tipo Sokoban donde resuelves problemas de MCM y MCD." ; Console::SetCursorPosition(7,i); i++;
    cout << "- Minijuego 2: Una carrera de coches donde avanzas resolviendo problemas." ; Console::SetCursorPosition(7,i); i++;
    cout ; Console::SetCursorPosition(7,i); i++;
    cout << "4. angulos, areas y Perimetros:" ; Console::SetCursorPosition(7,i); i++;
    cout << "- Animacion: Conceptos basicos de angulos, areas y perimetros." ; Console::SetCursorPosition(7,i); i++;
    cout << "- Minijuego 1: Un juego tipo Gusanito donde comes manzanas y resuelves problemas." ; Console::SetCursorPosition(7,i); i++;
    cout << "- Minijuego 2: Un juego tipo Pac-Man con problemas de geometria." ; Console::SetCursorPosition(7,i); i++;
    cout ; Console::SetCursorPosition(7,i); i++;
    cout << "Enfrentamiento Final: " ; Console::SetCursorPosition(7,i); i++;
    cout << "Al completar las cuatro puertas, enfrentate al profesor en un minijuego final. Derrota al profesor resolviendo problemas" ; Console::SetCursorPosition(7,i); i++;
    cout<<"para despertar y realizar el examen real." ; Console::SetCursorPosition(7,i); i++;
    cout ; Console::SetCursorPosition(7,i); i++;
    cout << "Examen Final: " ; Console::SetCursorPosition(7,i); i++;
    cout << "Tras superar todos los desafios en el sueño, deberas completar el examen en el colegio. Si resuelves correctamente" ; Console::SetCursorPosition(7,i); i++;
    cout<<"las preguntas, ¡ganaras el juego y demostraras que estas preparado!" ; Console::SetCursorPosition(7,i); i++;
}

#endif
