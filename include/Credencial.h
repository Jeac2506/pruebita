#ifndef CREDENCIAL_H
#define CREDENCIAL_H
#include <iostream>
#include <string>
using namespace std;
class Credencial
{
private:
    string nombre;
    string documento;
    string codigo;
    int programa;


public:
    Credencial(string nombre, string documento, string codigo, int programa);
    Credencial();
    void setNombre(string nombre);
    string getNombre();

    void setDocumento(string documento);
    string getDocumento();

    void setCodigo(string codigo);
    string getCodigo();

    void setPrograma(int programa);
    int getPrograma();
};
#endif // CREDENCIAL_H