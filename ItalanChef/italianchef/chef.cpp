#include "chef.h"


Chef::Chef() : chefName("gordon") {
    cout << "Chef"
         <<endl;
}


Chef::Chef(string name) : chefName(name) {
    cout << "Chef "
         << chefName ;
}


Chef::~Chef() {
    cout << "Chef "
    << chefName;
}


string Chef::getChefName() const {
    return chefName;
}


int Chef::makeSalad(int aines) {
    if (aines < 5) {
        cout << "Ei tarpeeksi ainesosia salaatin valmistamiseen."
             <<endl;
        return 0;
    }
    int salads = aines / 5;
    cout << "Chef "
         << chefName
         << " valmisti "
         << salads
         << " salaattia."
         <<endl;
    return salads;
}


int Chef::makeSoup(int aines) {
    if (aines < 3) {
        cout << "Ei tarpeeksi ainesosia keiton valmistamiseen."
             <<endl;
        return 0;
    }
    int soups = aines / 3;
    cout << "Chef "
         << chefName
         << " valmisti "
         << soups
         << " keittoa"
         <<endl;
    return soups;
}

