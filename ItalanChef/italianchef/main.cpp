#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main() {

    Chef chef("Gordon");


    cout << "Chef: "
         << chef.getChefName()
         << endl;


    int saladIngredients = 20;
    int soupIngredients = 10;

    int salads = chef.makeSalad(saladIngredients);
    cout << "Valmistettiin "
         << salads
         << " salaattia"
         <<endl;

    int soups = chef.makeSoup(soupIngredients);
    cout << "Valmistettiin "
         << soups
         << " keittoa"
         <<endl;

    ItalianChef italianChef("Luigi");


    if (!italianChef.askSecret("wrongpassword", 20, 20)) {
        cout << "Ei voitu valmistaa pizzaa";
    }

    if (italianChef.askSecret("pizza", 20, 15)) {
        cout << "Pizzat valmistettu onnistuneesti!";
    } else {
        cout << "Ei voitu valmistaa pizzaa";
    }

    return 0;
}
