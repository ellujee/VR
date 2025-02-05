#include "asiakas.h"


Asiakas::Asiakas(string nimi, double luottoraja)
    : nimi(nimi), kayttotili(nimi), luottotili(nimi, luottoraja) {}


bool Asiakas::talletus(double summa) {
    return kayttotili.deposit(summa);
}


bool Asiakas::nosto(double summa) {
    return kayttotili.withdraw(summa);
}


bool Asiakas::luotonNosto(double summa) {
    return luottotili.withdraw(summa);
}


bool Asiakas::luotonMaksu(double summa) {
    return luottotili.deposit(summa);
}


void Asiakas::showSaldo() const {
    cout << "Asiakas: "
         << nimi
         << endl;
    cout << "Käyttotilin saldo: "
         << kayttotili.getBalance() << " €"
         << endl;
    cout << "Luottotilin saldo: "
         << luottotili.getBalance() << " €"
         << endl;

}


string Asiakas::getNimi() const {
    return nimi;
}


bool Asiakas::tiliSiirto(double summa, Asiakas &saaja) {
    if (summa <= 0) {
        cout << "Negatiivista siirtoa ei voi tehda."
             << endl;
        return false;
    }


    if (kayttotili.withdraw(summa)) {

        if (saaja.talletus(summa)) {
            cout << "Siirto onnistui: "
                 << summa
                 << " siirretty "
                 << saaja.getNimi()
                 << " tilille."
                 << endl;
            return true;
        } else {

            kayttotili.deposit(summa);
            cout << "Siirto epaonnistui"
                 << endl;
            return false;
        }
    } else {
        cout << "Siirto epaonnistui"
             << endl;
        return false;
    }
}
