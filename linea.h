/************************************
 * Nombre: Juan Donoso              *
 * Cedula: 1723514335               *
 * Correo: jdonosoo@est.ups.edu.ec  *
 * Fecha: 24/11/2022                *
 * **********************************/
#ifndef LINEA_H
#define LINEA_H
#include <math.h>
#include <vector>
#include "punto.h"

class Linea : public Punto
{
private:
    float d;
    float m;
    Punto *p1;
    Punto *p2;
public:
    Linea();
    Linea(Punto*, Punto*);
    float getD() const;
    Punto *getP1() const;
    Punto *getP2() const;
    void setD();
    void setM();
    string toString();
    static int Num_Lineas;

};

#endif // LINEA_H
