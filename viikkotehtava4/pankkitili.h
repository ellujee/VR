#ifndef PANKKITILI_H
#define PANKKITILI_H

#include <iostream>
#include <string>
using namespace std;

class Pankkitili {
public:
    Pankkitili(string omistaja);

    virtual bool withdraw(double);
    virtual bool deposit(double);
    double getBalance() const;

protected:
    string omistaja;
    double saldo = 0;
};

#endif // PANKKITILI_H

