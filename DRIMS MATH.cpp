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
#include "Flechas.h"

using namespace std;
using namespace System;



int main() {
    
   srand(time(NULL));
    do {
    MenuPrincipalTodo();
    ActualizarMenuPrincipal();//funciones menu
    
    } while (true);
    
    
    
    system("pause>0");
    return 0;
}
