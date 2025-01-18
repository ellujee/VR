#include "game.h"

game::game(int maxNum)
{
    maxNumber = maxNum;
    cout << "game konstruktori"
        <<"maxNumber on"
        <<maxNumber
         << endl;
}

game::~game()
{
    cout << "game destruktori"
         <<endl;
}

void game::play()
{
    cout << "game play"
         <<endl;
    int game (int maxnum);

        int NumOfGuesses = 0;
        int randomNumber = 0;
        int playerGuess = 0;

        cout << "maxnum="
             << maxNumber
             <<endl;

        // arvotaan satunnainen luku
        srand(time(NULL));
        randomNumber = rand() % maxNumber;
        while (true)
        {

            // kysytään pelaajalta arvaus
            cout <<"anna luku"
                 <<endl;
            cin >> playerGuess;
            // kun pelaaja tekee arvauksen lkm+1
            playerGuess++;

            //tarkastetaan onko arvaus suurempi, pienempi, vai yhtäsuuri
            // jos arvaus yhtäsuuri kuin satunnaisluku

            if (playerGuess == randomNumber){
                cout << "oikein"
                     <<endl;
                break;
            }
            //jos arvaus on pienempi kuin satunnaisluku
            if (playerGuess < randomNumber){
                cout << "luku on suurempi"
                     <<endl;

            }
            //jos arvaus suurempi kuin satunnaisluku
            if (playerGuess > randomNumber){
                cout << "luku on pienempi"
                     <<endl;


}

void game::printGameResult()
{
    cout << "game printGameResult"
           return numOfGuesses;
         <<endl;
}
}

