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
