/************************************
 * Nombre: Juan Donoso              *
 * Cedula: 1723514335               *
 * Correo: jdonosoo@est.ups.edu.ec  *
 * Fecha: 24/11/2022                *
 * **********************************/
#ifndef PUNTO_H
#define PUNTO_H
#include <iostream>

using namespace std;

class Punto
{
private:
    int x;
    int y;
public:
    Punto();
    Punto(int, int);
    int getX() const;
    int getY() const;
    virtual string toString();
};

#endif // PUNTO_H
