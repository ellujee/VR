#ifndef SEURAAJA_H
#define SEURAAJA_H
#include <iostream>
using namespace std;
class Seuraaja
{
public:
    Seuraaja(string nimi);
    void paivitys(string viesti);
    string getNimi() const;
    Seuraaja *next=nullptr;
private:
    string nimi;
};

#endif // SEURAAJA_H
