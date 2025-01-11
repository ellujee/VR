#include <iostream>

using namespace std;
// prototyyppi
int game(int maxnum);

int main()
{
    int arvausten_lkm = 0;
    int maxnum = 40;
    arvausten_lkm = game(maxnum);
    cout << "arvauksia:"
         <<arvausten_lkm
         <<endl;

    return 0;
}
int game (int maxnum) {
    int arvausten_lkm = 0;
    int satunnaisluku = 0;
    int arvaus = 0;

    cout << "maxnum="
         << maxnum
         <<endl;

    // arvotaan satunnainen luku
    srand(time(NULL));
    satunnaisluku = rand() % maxnum;
    while (true) {

        // kysytään pelaajalta arvaus
        cout <<"anna luku"
             <<endl;
        cin >> arvaus;
        // kun pelaaja tekee arvauksen lkm+1
        arvausten_lkm++;

        //tarkastetaan onko arvaus suurempi, pienempi, vai yhtäsuuri
        // jos arvaus yhtäsuuri kuin satunnaisluku

        if (arvaus == satunnaisluku){
            cout << "oikein"
                 <<endl;
            break;
        }
        //jos arvaus on pienempi kuin satunnaisluku
        if (arvaus < satunnaisluku){
            cout << "luku on suurempi"
                 <<endl;

        }
        //jos arvaus suurempi kuin satunnaisluku
        if (arvaus > satunnaisluku){
            cout << "luku on pienempi"
                 <<endl;

        }
        // kerrotaan tarkastuksen tulos
        //jos pelaajan vastaus ei oikein, palataan kohtaan 2
    } // päättää while loopin
    return arvausten_lkm;

}
