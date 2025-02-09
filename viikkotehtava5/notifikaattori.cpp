#include "notifikaattori.h"

notifikaattori::notifikaattori() {
    cout << "Luodaan notifikaattori" << endl;
}

// ✅ LISÄÄ SEURAAJA LISTAN ALKUUN
void notifikaattori::lisaa(Seuraaja* uusi) {
    cout << "Notifikaattori lisää seuraajan " << uusi->getNimi() << endl;
    uusi->next = seuraajat; // Uusi seuraaja osoittaa vanhaan alkuun
    seuraajat = uusi;       // Alku päivitetään uuteen
}

// ✅ POISTA SEURAAJA LISTALTA
void notifikaattori::poista(Seuraaja* poistettava) {
    if (!seuraajat) return; // Lista on tyhjä

    cout << "Poistetaan seuraaja " << poistettava->getNimi() << endl;

    // Jos eka alkio on poistettava
    if (seuraajat == poistettava) {
        seuraajat = seuraajat->next;
        return;
    }

    // Etsitään edellinen
    Seuraaja* nykyinen = seuraajat;
    while (nykyinen->next && nykyinen->next != poistettava) {
        nykyinen = nykyinen->next;
    }

    // Poistetaan ohittamalla
    if (nykyinen->next == poistettava) {
        nykyinen->next = poistettava->next;
    }
}

// ✅ TULOSTA LISTAN SEURAAJAT
void notifikaattori::tulosta() {
    cout << "Notifikaattorin seuraajat:" << endl;
    Seuraaja* temp = seuraajat;
    while (temp) {
        cout << "Seuraaja " << temp->getNimi() << endl;
        temp = temp->next;
    }
}

// ✅ POSTITA VIESTI KAIKILLE SEURAAJILLE
void notifikaattori::postita(string viesti) {
    cout << "Notifikaattori postaa viestin: " << viesti << endl;
    Seuraaja* temp = seuraajat;
    while (temp) {
        temp->paivitys(viesti);
        temp = temp->next;
    }
}


