#include "Credencial.h"

Credencial::Credencial(string nombre, string documento, string codigo, int programa) {
    nombre = nombre;
    documento = documento;
    codigo = codigo;
    programa = programa;
}

void Credencial::setNombre(string nombre) {
    nombre = nombre;
}
string Credencial::getNombre() {
    return nombre;
}
void Credencial::setDocumento(string documento) {
    documento = documento;
}
string Credencial::getDocumento() {
    return documento;
}
void Credencial::setCodigo(string codigo) {
    codigo = codigo;
}
string Credencial::getCodigo() {
    return codigo;
}
void Credencial::setPrograma(int programa) {
    programa = programa;
}
int Credencial::getPrograma() {
    return programa;
}
int Credencial::getPrograma() {
    return programa;
}