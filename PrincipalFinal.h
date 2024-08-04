#ifndef PrincipalFinal_h
#define PrincipalFinal_h


#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <Windows.h>
#include <thread>
#include "COLORES.h"
#include "cursor.h"
#include "EscenariosDragon.h"

using namespace std;
#define MAX_FIREBALLS 10  // Máximo número de bolas de fuego simultáneas
#define MAX_PERSONAJE_ATAQUES 10  // Máximo número de ataques del personaje simultáneos



struct Fireball {
    int x, y;
    bool active;
    int** representacion;

    void create(int startX, int startY) {
        x = startX;
        y = startY;
        active = true;
        representacion = new int* [3];
        for (int i = 0; i < 3; ++i) {
            representacion[i] = new int[3];
            for (int j = 0; j < 3; ++j) {
                representacion[i][j] = bolaFuegoDragon[i][j];
            }
        }
    }

    void move(int personajeX, int personajeY, int personajeColision[15][13], int& personajeVida) {
        if (active) {
            clear(); // Borra la posición anterior
            x -= 2; // Las bolas de fuego se mueven hacia la izquierda

            if (x < 0 || y < 0 || y >= 44 || x >= 156 || mapaFinal[y][x] == 1) {
                active = false;
            }
            else if (verificarColsion_Dragon(personajeX, personajeY, personajeColision)) {
                active = false;
                personajeVida -= 10; // Resta 10 de vida al personaje
            }
            draw(); // Dibuja la nueva posición
        }
    }

    bool verificarColsion_Dragon(int personajeX, int personajeY, int personajeColision[15][13]) {
        int fireballWidth = 3;
        int fireballHeight = 3;

        for (int i = 0; i < fireballHeight; ++i) {
            for (int j = 0; j < fireballWidth; ++j) {
                int fireballX = x + j;
                int fireballY = y + i;

                if (fireballX >= personajeX && fireballX < personajeX + 13 &&
                    fireballY >= personajeY && fireballY < personajeY + 15) {
                    int colisionX = fireballX - personajeX;
                    int colisionY = fireballY - personajeY;

                    if (personajeColision[colisionY][colisionX] == 2) {
                        return true;
                    }
                }
            }
        }
        return false;
    }

    void draw() {
        if (active) {
            for (int i = 0; i < 3; ++i) {
                for (int j = 0; j < 3; ++j) {
                    int drawX = x + j;
                    int drawY = y + i;
                    if (drawX >= 0 && drawX < 156 && drawY >= 0 && drawY < 44) {
                        cursor(drawX, drawY);
                        colorBackground(representacion[i][j]);
                        cout << " ";
                    }
                }
            }
        }
    }

    void clear() {
        if (x >= 0 && x < 156 && y >= 0 && y < 44) {
            for (int i = 0; i < 3; ++i) {
                for (int j = 0; j < 3; ++j) {
                    int clearX = x + j;
                    int clearY = y + i;
                    if (clearX >= 0 && clearX < 156 && clearY >= 0 && clearY < 44) {
                        cursor(clearX, clearY);
                        colorBackground(8);
                        cout << " ";
                    }
                }
            }
        }
    }

    void destruir() {
        for (int i = 0; i < 3; i++) {
            delete[] representacion[i];
        }
        delete[] representacion;
    }
};


struct PersonajeAtaque {
    int x, y;
    bool active;
    int valor;

    void create(int startX, int startY) {
        x = startX;
        y = startY;
        active = true;
        valor = ataquePersonaje[1];
    }

    void move(int dragonX, int dragonY, int dragonColision[20][20], int& dragonVida) {
        if (active) {
            clear(); // Borra la posición anterior
            x += 2; // El ataque se mueve hacia la derecha

            if (x >= 156 || y < 0 || y >= 44 || mapaFinal[y][x] == 1) {
                active = false;
            }
            else if (checkCollisionWithDragon(dragonX, dragonY, dragonColision)) {
                active = false;
                dragonVida -= 10; // Resta 10 de vida al dragón
            }
            draw(); // Dibuja la nueva posición
        }
    }

    bool checkCollisionWithDragon(int dragonX, int dragonY, int dragonColision[20][20]) {
        int ataqueWidth = 1; // Tamaño del ataque del personaje
        int ataqueHeight = 1;

        for (int i = 0; i < ataqueHeight; ++i) {
            for (int j = 0; j < ataqueWidth; ++j) {
                int ataqueX = x + j;
                int ataqueY = y + i;

                if (ataqueX >= dragonX && ataqueX < dragonX + 20 &&
                    ataqueY >= dragonY && ataqueY < dragonY + 20) {
                    int colisionX = ataqueX - dragonX;
                    int colisionY = ataqueY - dragonY;
                    if (dragonColision[colisionY][colisionX] == 3) {
                        return true;
                    }
                }
            }
        }
        return false;
    }

    void draw() {
        if (active) {
            if (x >= 0 && x < 156 && y >= 0 && y < 44) {
                cursor(x, y);
                colorBackground(valor);
                cout << " ";
            }
        }
    }

    void clear() {
        if (active) {
            if (x >= 0 && x < 156 && y >= 0 && y < 44) {
                cursor(x, y);
                colorBackground(8);  // Color de fondo (asumiendo que es el color del mapa)
                cout << " ";
            }
        }
    }
};

// Estructura para el personaje principal
struct Personaje {
    int vida;
    int x, y;  // Posición en el mapa
    int** representacion;  // Matriz que representa al personaje
    PersonajeAtaque ataques[MAX_PERSONAJE_ATAQUES];  // Lista de ataques del personaje
    int ataqueCooldown;  // Tiempo de espera entre disparos

    void crear() {
        vida = 100;
        x = 7;
        y = 22;
        ataqueCooldown = 0;  // Inicialmente, puede disparar de inmediato
        representacion = new int* [15];
        for (int i = 0; i < 15; ++i) {
            representacion[i] = new int[13];
        }
    }

    void inicializar() {
        for (int i = 0; i < 15; ++i) {
            for (int j = 0; j < 13; ++j) {
                representacion[i][j] = personajePrincipal[i][j];
            }
        }
    }

    void destruir() {
        for (int i = 0; i < 15; ++i) {
            delete[] representacion[i];
        }
        delete[] representacion;
    }

    void mover(int dx, int dy) {
        int newX = x + dx;
        int newY = y + dy;

        bool posicionValida = true;
        for (int i = 0; i < 15; ++i) {
            for (int j = 0; j < 13; ++j) {
                if (newX + j < 0 || newX + j >= 156 || newY + i < 0 || newY + i >= 44) {
                    posicionValida = false;
                    break;
                }
                if (mapaFinal[newY + i][newX + j] == 1) {
                    posicionValida = false;
                    break;
                }
            }
            if (!posicionValida) break;
        }

        if (posicionValida) {
            x = newX;
            y = newY;
        }
    }

    void disparar() {
        if (ataqueCooldown == 0) {
            for (int i = 0; i < MAX_PERSONAJE_ATAQUES; ++i) {
                if (!ataques[i].active) {
                    ataques[i].create(x + 13, y + 7);  // Ajusta la posición de inicio del ataque
                    ataqueCooldown = 10;  // Tiempo de espera antes del próximo disparo
                    break;
                }
            }
        }
    }

    void actualizarAtaques(int dragonX, int dragonY, int dragonColision[20][20], int& dragonVida) {
        for (int i = 0; i < MAX_PERSONAJE_ATAQUES; ++i) {
            if (ataques[i].active) {
                ataques[i].clear();  // Borra el ataque de la posición actual
                ataques[i].move(dragonX, dragonY, dragonColision, dragonVida);  // Mueve el ataque a la nueva posición
                ataques[i].draw();  // Dibuja el ataque en la nueva posición
            }
        }

        if (ataqueCooldown > 0) {
            ataqueCooldown--;
        }
    }

    void dibujar() {
        for (int i = 0; i < 15; ++i) {
            for (int j = 0; j < 13; ++j) {
                cursor(x + j, y + i);
                colorBackground(representacion[i][j]);
                cout << " ";
            }
        }
    }
};

// Estructura para el dragón
struct Dragon {
    int vida;
    int x, y;  // Posición en el mapa
    int direccion;  // 1 para abajo, -1 para arriba
    int** representacion;  // Matriz que representa al dragón
    Fireball fireballs[MAX_FIREBALLS];  // Array de bolas de fuego
    int fireballCooldown;  // Tiempo de espera entre disparos

    void crear() {
        vida = 150;
        x = 130;  // Posición inicial en el mapa
        y = 6;
        direccion = 1;  // Comienza moviéndose hacia abajo
        fireballCooldown = 0;  // Inicialmente, puede disparar de inmediato
        representacion = new int* [20];
        for (int i = 0; i < 20; ++i) {
            representacion[i] = new int[20];
        }
    }

    void inicializar() {
        for (int i = 0; i < 20; ++i) {
            for (int j = 0; j < 20; ++j) {
                representacion[i][j] = dragon[i][j];
            }
        }
    }

    void destruir() {
        for (int i = 0; i < 20; ++i) {
            delete[] representacion[i];
        }
        delete[] representacion;
    }

    void mover() {
        int newY = y + direccion;
        bool colision = false;

        for (int i = 0; i < 20; ++i) {
            for (int j = 0; j < 20; ++j) {
                if (newY + i < 44 && mapaFinal[newY + i][x + j] == 1) {
                    colision = true;
                    break;
                }
            }
            if (colision) break;
        }

        if (colision) {
            direccion *= -1;  // Cambia la dirección si hay colisión
        }
        else {
            y = newY;  // Actualiza la posición si no hay colisión
        }
    }

    void disparar() {
        if (fireballCooldown == 0) {
            for (int i = 0; i < MAX_FIREBALLS; ++i) {
                if (!fireballs[i].active) {
                    fireballs[i].create(x - 3, y + 10);  // Ajusta la posición de inicio de la bola de fuego
                    fireballCooldown = 20;  // Tiempo de espera antes del próximo disparo
                    break;
                }
            }
        }
    }

    void actualizarBolasFuego(int personajeX, int personajeY, int personajeColision[15][13], int& personajeVida) {
        for (int i = 0; i < MAX_FIREBALLS; ++i) {
            if (fireballs[i].active) {
                fireballs[i].clear();  // Borra la bola de fuego de la posición actual
                fireballs[i].move(personajeX, personajeY, personajeColision, personajeVida);  // Mueve la bola de fuego a la nueva posición
                fireballs[i].draw();  // Dibuja la bola de fuego en la nueva posición
            }
        }

        if (fireballCooldown > 0) {
            fireballCooldown--;
        }
    }

    void dibujar() {
        for (int i = 0; i < 20; ++i) {
            for (int j = 0; j < 20; ++j) {
                cursor(x + j, y + i);
                colorBackground(representacion[i][j]);
                cout << " ";
            }
        }
    }
};

void dibujarMapaNivelFinal() {
    for (int i = 0; i < 44; ++i) {
        for (int j = 0; j < 156; ++j) {
            int valor = (mapaFinal[i][j] == 1) ? 1 : 8;
            colorBackground(valor);
            cursor(j, i);
            cout << " ";
        }
    }
}


void borrarPersonaje(int x, int y, int width, int height) {
    for (int i = 0; i < height; ++i) {
        cursor(x, y + i);
        for (int j = 0; j < width; ++j) {
            colorBackground(8);
            cout << " ";
        }
    }
}


void borrarDragon(int x, int y, int width, int height) {
    for (int i = 0; i < height; ++i) {
        cursor(x, y + i);
        for (int j = 0; j < width; ++j) {
            colorBackground(8);
            cout << " ";
        }
    }
}


void mostrarVidas(int personajeVida, int dragonVida) {
    cursor(0, 0);
    cout << "Vida del wPersonaje: " << personajeVida << "   ";
    cursor(0, 1);
    cout << "Vida del Dragon: " << dragonVida << "   ";
}

void principalFinal() {
    Personaje heroe;
    Dragon enemigo;

    heroe.crear();
    heroe.inicializar();
    heroe.x = 7;
    heroe.y = 22;

    enemigo.crear();
    enemigo.inicializar();

    dibujarMapaNivelFinal();  
    heroe.dibujar();  
    enemigo.dibujar(); 

    bool continuarJuego = true;

    while (continuarJuego) {
        if (_kbhit()) {
            char tecla = _getch();
            if (tecla == 'q') {
                continuarJuego = false;
            }
            else {
                int dx = 0, dy = 0;
                switch (tecla) {
                case 'w': dy = -1; break;
                case 's': dy = 1; break;
                case ' ': heroe.disparar(); break;  
                }
                borrarPersonaje(heroe.x, heroe.y, 13, 15);
                heroe.mover(dx, dy);
                heroe.dibujar();
            }
        }

        borrarDragon(enemigo.x, enemigo.y, 20, 20);
        enemigo.mover();
        enemigo.dibujar();
        enemigo.disparar();  
        enemigo.actualizarBolasFuego(heroe.x, heroe.y, colisionPersonaje, heroe.vida);  

        heroe.actualizarAtaques(enemigo.x, enemigo.y, colisionDragon, enemigo.vida);  
        mostrarVidas(heroe.vida, enemigo.vida);

        if (heroe.vida <= 0) {
            cout << "\n¡El Dragón ha ganado!" << endl;
            continuarJuego = false;
        }
        else if (enemigo.vida <= 0) {
            cout << "\n¡El Personaje ha ganado!" << endl;
            continuarJuego = false;
        }

        Sleep(50);  
    }

    heroe.destruir();
    enemigo.destruir();
}

#endif 

