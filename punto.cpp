/************************************
 * Nombre: Juan Donoso              *
 * Cedula: 1723514335               *
 * Correo: jdonosoo@est.ups.edu.ec  *
 * Fecha: 24/11/2022                *
 * **********************************/
#include "punto.h"

int Punto::getX() const
{
    return x;
}

int Punto::getY() const
{
    return y;
}

string Punto::toString()
{
    return "P(" + to_string(x) +"," + to_string(y) + ")";
}

Punto::Punto(){}

Punto::Punto(int x, int y): x(x), y(y) {}
