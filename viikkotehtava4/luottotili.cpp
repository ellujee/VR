#include "luottotili.h"


Luottotili::Luottotili(string omistaja, double luottoRaja)
    : Pankkitili(omistaja), luottoRaja(luottoRaja) {}


bool Luottotili::deposit(double amount) {
    if (amount <= 0) {
        return false;
    }

    saldo += amount;

    if (saldo > 0) {
        saldo = 0;
    }

    return true;
}


bool Luottotili::withdraw(double amount) {
    if (amount <= 0) {
        return false;
    }

    if (saldo - amount < -luottoRaja) {
        return false;
    }

    saldo -= amount;
    return true;
}

