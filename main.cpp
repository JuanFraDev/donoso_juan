/************************************
 * Nombre: Juan Donoso              *
 * Cedula: 1723514335               *
 * Correo: jdonosoo@est.ups.edu.ec  *
 * Fecha: 24/11/2022                *
 * **********************************/
#include <iostream>
#include "linea.h"
#include "punto.h"

int Linea::Num_Lineas = 0;

using namespace std;

int main()
{
    cout << "= = JUAN DONOSO = =\n" << endl;
    Punto p1(3,5);
    Punto p2(8,9);
    Linea l1(&p1, &p2);
    Linea::Num_Lineas++;
    return 0;
}
