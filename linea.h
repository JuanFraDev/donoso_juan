#ifndef LINEA_H
#define LINEA_H
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
    static vector <int> Num_Lineas;
    Linea();
    Linea(Punto*, Punto*);
    float getD() const;
    Punto *getP1() const;
    Punto *getP2() const;
};

#endif // LINEA_H
