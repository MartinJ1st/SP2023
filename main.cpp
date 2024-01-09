#include<iostream>
#include<cstring>

using namespace std;


int main() {
    int m, n, Jx, Jy;
    int Zx = 0, Zy = 0; //lokacija na Zmija
    cin >> m >> n >> Jx >> Jy;
    cin.ignore(); // za da ne se utne neso so cin buffer
    int pominati[100][100] = {};

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            pominati[i][j] = 0; // za koga ke pomine da gi beleze so 1
        }
    }

    char komandi[1000];
    cin.getline(komandi, 1000); // Vnes na komandi za dvizenje


    int ChangeIndexRed = 1, ChangeIndexKolona = 0;
    // Se menuvat vo zavisnost od komandata i vrednosta
    // se dodava na zmijata za da se pridvize

    for (int i = 0; strlen(komandi); i++) {
        char move = komandi[i]; // zima poedinecna komanda i se ispituva
        if (move != 'F') {
            if (ChangeIndexKolona == 0) {
                if (move == 'L') {
                    ChangeIndexKolona = ChangeIndexRed;
                } else {
                    ChangeIndexKolona = -ChangeIndexRed;
                }
                ChangeIndexRed = 0;

            } else {
                if (move == 'L') {
                    ChangeIndexRed = -ChangeIndexKolona;
                } else {
                    ChangeIndexRed = ChangeIndexKolona;
                }
                ChangeIndexKolona = 0;

            }
        }

        Zx += ChangeIndexRed;
        Zy += ChangeIndexKolona;

        if (Zx >= 0 && Zx < m && Zy >= 0 && Zy < n) {
            if (pominati[Zx][Zy] == 1) {
                cout << "GAME OVER Ouch";
                return 0;
            }
        } else {
            cout << "GAME OVER Ouch";
            return 0;
        }

        if (Zx == Jx && Zy == Jy) {
            cout << "NJAM";
            return 0;
        }

        pominati[Zx][Zy] = 1;
    }

    cout << "GAME OVER" << endl;
    return 0;
}