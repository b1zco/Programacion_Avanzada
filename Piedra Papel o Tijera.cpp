#include "jugador.h"
#include <iostream>

Jugador::Jugador() : puntaje(0) {}

void Jugador::setPuntaje(int p) {
    puntaje = p;
}

int Jugador::getPuntaje() const {
    return puntaje;
}

void Jugador::solicitarEleccion() {
    std::cout << "Elija: (1) piedra, (2) papel o (3) tijera" << std::endl;
}

std::string Jugador::generarEleccion() {
    int opcion;
    std::cin >> opcion;

    switch (opcion) {
    case 1:
        return "piedra";
    case 2:
        return "papel";
    case 3:
        return "tijera";
    default:
        std::cout << "Opción no valida" << std::endl;
        return generarEleccion(); 
    }
}

void Jugador::evaluar(std::string eleccion1, std::string eleccion2) {
    if (eleccion1 == eleccion2) {
        std::cout << "Empate." << std::endl;
    }
    else if ((eleccion1 == "piedra" && eleccion2 == "tijera") ||
        (eleccion1 == "papel" && eleccion2 == "piedra") ||
        (eleccion1 == "tijera" && eleccion2 == "papel")) {
        puntaje++;
    }
    else {
       
    }

    std::cout << "Puntaje del jugador : " << puntaje << std::endl;
}