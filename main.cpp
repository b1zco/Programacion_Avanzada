#include <iostream>
#include "jugador.h"

int main() {
    Jugador jugador1, jugador2;

    char continuar;
    do {
        jugador1.solicitarEleccion();
        std::string eleccion1 = jugador1.generarEleccion();

        jugador2.solicitarEleccion();
        std::string eleccion2 = jugador2.generarEleccion();

        std::cout << "Jugador 1 elige: " << eleccion1 << std::endl;
        std::cout << "Jugador 2 elige: " << eleccion2 << std::endl;

        jugador1.evaluar(eleccion1, eleccion2);
        jugador2.evaluar(eleccion2, eleccion1);

        std::cout << "¿Desea continuar jugando? (s/n): ";
        std::cin >> continuar;
    } while (continuar == 's' || continuar == 'S');

    
    int puntajeJugador1 = jugador1.getPuntaje();
    int puntajeJugador2 = jugador2.getPuntaje();

   
    std::cout << "Jugador 1: " << puntajeJugador1 << std::endl;
    std::cout << "Jugador 2: " << puntajeJugador2 << std::endl;

    return 0;
}