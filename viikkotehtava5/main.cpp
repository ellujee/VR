#include <iostream>
#include "seuraaja.h"
using namespace std;
#include "notifikaattori.h"


#include "notifikaattori.h"

int main() {
    notifikaattori n;

    // Luodaan seuraajat
    Seuraaja a("A");
    Seuraaja b("B");
    Seuraaja c("C");

    // Lisätään seuraajat
    n.lisaa(&a);
    n.lisaa(&b);
    n.lisaa(&c);

    // Tulostetaan lista
    n.tulosta();

    // Postitetaan viesti 1
    n.postita("tama on viesti 1");

    // Poistetaan B
    n.poista(&b);

    // Postitetaan viesti 2
    n.postita("tama on viesti 2");

    return 0;
}


