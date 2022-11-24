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
    string toString();
};

#endif // PUNTO_H
