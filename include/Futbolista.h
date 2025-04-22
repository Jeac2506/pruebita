#ifndef FUTBOLISTA_H
#define FUTBOLISTA_H

#include <iostream>
#include <string>

#include "Jugador.h"

class Futbolista : public Jugador {
private:
    string posicion;
    int goles;
    int asistencias;

    
public:
    Futbolista();
    void setPosicion(string posicion);
    string getPosicion();

    void setGoles(int goles);
    int getGoles();

    void setAsistencias(int asistencias);
    int getAsistencias();

};
#endif // FUTBOLISTA_H