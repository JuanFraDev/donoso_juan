/************************************
 * Nombre: Juan Donoso              *
 * Cedula: 1723514335               *
 * Correo: jdonosoo@est.ups.edu.ec  *
 * Fecha: 24/11/2022                *
 * **********************************/
#include "linea.h"

float Linea::getD() const
{
    return d;
}

Punto *Linea::getP1() const
{
    return p1;
}

Punto *Linea::getP2() const
{
    return p2;
}

void Linea::setD()
{
    d = sqrt(pow((getP2()->getX() - getP1()->getX()),2) + pow((getP2()->getY() - getP1()->getY()),2));
}

void Linea::setM()
{
    m = (getP2()->getY() - getP1()->getY())/(getP2()->getX() - getP1()->getX());
}

string Linea::toString()
{
    return "L" + to_string(Num_Lineas) + "["+ "P1 (" + to_string(getP1()->getX()) + "," + to_string(getP1()->getY()) + ") - P2 (" +
           to_string(getP2()->getX()) + "," + to_string(getP2()->getY()) + ")" + " d = " + to_string(d) + " m = " + to_string(m)+ "]";
}

Linea::Linea()
{

}

Linea::Linea(Punto *p1, Punto *p2)
{
    this->p1 = p1;
    this->p2 = p2;
}


