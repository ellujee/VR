#include <iostream>
#include "pankkitili.h"
#include "luottotili.h"
#include "asiakas.h"  // Lisätään Asiakas-luokka

using namespace std;

int main() {

    cout << "Pankkitilin testausta"
         << endl;
    Pankkitili tili("Matti Meikalainen");

    if (tili.deposit(500)) {
        cout
            << "Talletus onnistui. Saldo: "
            << tili.getBalance() << " e"
            << endl;
    }

    if (tili.withdraw(200)) {
        cout << "Nosto onnistui. Saldo: "
             << tili.getBalance()
             << " e"
             << endl;
    }


    cout << "Luottotilin testausta"
         << endl;
    Luottotili luottoTili("Laura Laakeri", 1000);

    cout
        << "Yritetaan nostaa 300 €"
        << endl;
    if (luottoTili.withdraw(300)) {
        cout << "Nosto onnistui. Velka: "
             << luottoTili.getBalance()
             << " e"
             << endl;
    } else {
        cout << "Nosto epaonnistui"
             << endl;
    }

    cout << "Yritetaann nostaa 800 €"
         << endl;
    if (luottoTili.withdraw(800)) {
        cout << "Nosto onnistui. Velka: "
             << luottoTili.getBalance()
             << " e"
             << endl;
    } else {
        cout << "Nosto epäonnistui. Velka: "
             << luottoTili.getBalance()
             << " e"
             << endl;
    }

    cout << "Maksetaan velkaa 200 €."
         << endl;
    if (luottoTili.deposit(200)) {
        cout << "Maksu onnistui. Velka: "
             << luottoTili.getBalance()
             << " e"
             << endl;
    } else {
        cout << "Maksu epaonnistui."
             << endl;
    }

    cout << "Maksetaan 1000 €"
         << endl;
    if (luottoTili.deposit(1000)) {
        cout << "Maksu onnistui. Velka: "
             << luottoTili.getBalance()
             << " e"
             << endl;
    } else {
        cout << "Maksu epaonnistui."
             << endl;
    }


    cout << "Asiakas-luokan testausta:"
         << endl;
    Asiakas asiakas1("Matti Meikalainen", 1500);
    Asiakas asiakas2("Laura laakeri", 1000);


    cout << "Talletetaan 1000 € Matti Meikalaisen tilille."
         << endl;
    asiakas1.talletus(1000);
    asiakas1.showSaldo();

    cout << "Nostetaan 300 € Matti Meikalaisen tililtä."
         << endl;
    asiakas1.nosto(300);
    asiakas1.showSaldo();


    cout << "\nNostetaan 500 € luottoa Matti Meikalaiselle."
         << endl;
    asiakas1.luotonNosto(500);
    asiakas1.showSaldo();

    cout << "Maksetaan 200 € luottoa takaisin."
         << endl;
    asiakas1.luotonMaksu(200);
    asiakas1.showSaldo();


    cout << "Siirretään 200 € Matti Meikalaiselta Laura Laakerille."
         << endl;
    if (asiakas1.tiliSiirto(200, asiakas2)) {
        cout << "Tilisiirto onnistui." << endl;
    } else {
        cout << "Tilisiirto epaonnistui"
             << endl;
    }


    cout << "Saldon tarkistus tilisiirron jalkeen:"
         << endl;
    asiakas1.showSaldo();
    asiakas2.showSaldo();

    return 0;
}


