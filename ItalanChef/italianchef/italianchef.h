#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"

class ItalianChef : public Chef {
private:
    string password = "pizza";
    int flour;
    int water;

    int makePizza();

public:
    ItalianChef(string name);
    ~ItalianChef();

    bool askSecret(string pass, int flourAmount, int waterAmount);
};

#endif // ITALIANCHEF_H

