//
// Created by adamc on 15.04.2017.
//

#include "Trojkat.h"


Trojkat::Trojkat() {}

Trojkat::Trojkat(double a, double b, double c) : a(a), b(b), c(c) {}

void Trojkat::rysuj() const {
    Ksztalt::rysuj();
    //implementation here!!!
}

double Trojkat::getA() const {
    return a;
}

void Trojkat::setA(double a) {
    Trojkat::a = a;
}

double Trojkat::getB() const {
    return b;
}

void Trojkat::setB(double b) {
    Trojkat::b = b;
}

double Trojkat::getC() const {
    return c;
}

void Trojkat::setC(double c) {
    Trojkat::c = c;
}
