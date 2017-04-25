//
// Created by adamc on 25.04.2017.
//

#include "pesel.h"

pesel::pesel(std::string pesel) {
    if(validatePesel) {
        this->number = pesel;
    }
}

bool pesel::validatePesel(std::string pesel) {
    // dlugosc 11 znakow:
    if (pesel.size() != 11) {
        throw(WrongSize(pesel.size()));
    }
    // tylko cyfry:
    for(int i=0;i<pesel.size();i++) {
        if(pesel[i] < 48 || pesel[i] > 57) {
            throw(WrongCharacter(pesel[i]));
        }
    }
    // suma kontrolna (9×a + 7×b + 3×c + 1×d + 9×e + 7×f + 3×g + 1×h + 9×i + 7×j):
    for(int i=0;)
    return true;
}

WrongSize::WrongSize(unsigned long peselSize) : peselSize(peselSize) {}

unsigned long WrongSize::getPeselSize() const {
    return peselSize;
}

WrongControlSum::WrongControlSum(int controlSum) : controlSum(controlSum) {}

int WrongControlSum::getControlSum() const {
    return controlSum;
}

WrongCharacter::WrongCharacter(char wrongCharecter) : wrongCharecter(wrongCharecter) {}

char WrongCharacter::getWrongCharecter() const {
    return wrongCharecter;
}
