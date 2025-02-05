#ifndef ASIAKAS_H
#define ASIAKAS_H

#include <iostream>
#include "pankkitili.h"
#include "luottotili.h"

using namespace std;

class Asiakas {
public:
    Asiakas(string nimi, double luottoraja);


    bool talletus(double summa);
    bool nosto(double summa);
    bool tiliSiirto(double summa, Asiakas &saaja);
    bool luotonMaksu(double summa);
    bool luotonNosto(double summa);
    void showSaldo() const;
    string getNimi() const;

private:
    string nimi;
    Pankkitili kayttotili;
    Luottotili luottotili;
};

#endif // ASIAKAS_H

