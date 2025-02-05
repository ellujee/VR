#ifndef LUOTTOTILI_H
#define LUOTTOTILI_H

#include "pankkitili.h"

class Luottotili : public Pankkitili
{
public:
    Luottotili();
    Luottotili(string omistaja, double luottoRaja);
    virtual bool deposit(double) override;
    virtual bool withdraw (double) override;
private:
    double luottoRaja=0;
};

#endif // LUOTTOTILI_H
