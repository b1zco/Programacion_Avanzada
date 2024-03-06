#ifndef JUGADOR_H
#define JUGADOR_H

#include <string>

class Jugador {
private:
    int puntaje;

public:
    Jugador();
    void setPuntaje(int p);
    int getPuntaje() const;
    void solicitarEleccion();
    std::string generarEleccion();
    void evaluar(std::string eleccion1, std::string eleccion2);
};

#endif 