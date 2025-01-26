#include "italianchef.h"


ItalianChef::ItalianChef(string name) : Chef(name), flour(0), water(0) {
    cout << "ItalianChef "
         << chefName << " luotu"
         <<endl;
}


ItalianChef::~ItalianChef() {
    cout << "ItalianChef "
         << chefName
         << " tuhottu"
         <<endl;
}


bool ItalianChef::askSecret(string pass, int flourAmount, int waterAmount) {
    if (pass == password) {
        this->flour = flourAmount;
        this->water = waterAmount;
        cout << "ItalianChef: Salasana oikein, ainekset asetettu"
             <<endl;


        int pizzas = makePizza();
        cout << "ItalianChef valmisti "
             << pizzas
             << " pizzaa"
             <<endl;
        return true;
    }
    cout << "ItalianChef: Väärä salasana"
         <<endl;
    return false;
}

int ItalianChef::makePizza() {
    if (flour < 5 || water < 5) {
        cout << "ItalianChef: Ei tarpeeksi ainesosia pizzan valmistamiseen"
             <<endl;
        return 0;
    }
    int pizzas = min(flour / 5, water / 5);
    flour -= pizzas * 5;
    water -= pizzas * 5;
    return pizzas;
}




