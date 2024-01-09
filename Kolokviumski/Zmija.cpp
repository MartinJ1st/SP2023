#include<iostream>
#include <cstring>

using namespace std;

int main() {

    int m, n; //golemina na niva
    int fields[100][100];
    cin >> m >> n;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            fields[i][j] = 0;
        }
    }

    int appleI, appleJ; //koordinati na jabolkoto
    cin >> appleI >> appleJ;

    cin.ignore(); //za da se ignorira noviot red posle brojkata appleJ

    char commands[1001];
    cin.getline(commands, 1001);

    int snakeI = 0, snakeJ = 0;
    int dI = 1, dJ = 0;
    //Svrtena nadolu ILI nagore     -> -1 kaj R
    //Svrtena nalevo ILI nadesno    -> -1 kaj L
    //VO SEKOJ SLUCAJ se trampat vrednostite

    for (int i = 0; i < strlen(commands); i++) {
        char command = commands[i];
        switch (command) {
            case 'L':
            case 'R':
                if (dJ == 0) {
                    if (command == 'R') {
                        dI *= -1;
                    }
                    swap(dI, dJ);
                } else { //dJ == 1 ili -1
                    if (command == 'L') {
                        dJ *= -1;
                    }
                    swap(dI, dJ);
                }
                break;
            case 'F':
                break;
            default:
                cout << "ERROR";
                return 0;
        }

        snakeI += dI;
        snakeJ += dJ;

        if (snakeI == appleI && snakeJ == appleJ) {
            cout << "NJAM";
            return 0;
        }

        if (snakeI < 0 || snakeI >= m || snakeJ < 0 || snakeJ >= n) {
            cout << "GAME OVER Ouch";
            return 0;
        }

        if (fields[snakeI][snakeJ] == 1) {
            cout << "GAME OVER Ouch";
            return 0;
        } else {
            fields[snakeI][snakeJ] = 1;
        }
    }

    cout << "GAMEOVER";

//    ako treba so pokazuvac da verglam
//    char * ptr = commands;
//    while (*ptr!=0){
//        char command = *ptr;
//
//        ptr++;
//    }
    return 0;
}


//2 resenie Stefan
//
//#include<iostream>
//#include<cstring>
//
//using namespace std;
//
//
//int main() {
//    int m, n, Jx, Jy;
//    int Zx = 0, Zy = 0; //lokacija na Zmija
//    cin >> m >> n >> Jx >> Jy;
//    cin.ignore(); // za da ne se utne neso so cin buffer
//    int pominati[100][100] = {};
//
//    for (int i = 0; i < m; i++) {
//        for (int j = 0; j < n; j++) {
//            pominati[i][j] = 0; // za koga ke pomine da gi beleze so 1
//        }
//    }
//
//    char komandi[1000];
//    cin.getline(komandi, 1000); // Vnes na komandi za dvizenje
//
//
//    int ChangeIndexRed = 1, ChangeIndexKolona = 0;
//    // Se menuvat vo zavisnost od komandata i vrednosta
//    // se dodava na zmijata za da se pridvize
//
//    for (int i = 0; strlen(komandi); i++) {
//        char move = komandi[i]; // zima poedinecna komanda i se ispituva
//        if (move != 'F') {
//            if (ChangeIndexKolona == 0) {
//                if (move == 'L') {
//                    ChangeIndexKolona = ChangeIndexRed;
//                } else {
//                    ChangeIndexKolona = -ChangeIndexRed;
//                }
//                ChangeIndexRed = 0;
//
//            } else {
//                if (move == 'L') {
//                    ChangeIndexRed = -ChangeIndexKolona;
//                } else {
//                    ChangeIndexRed = ChangeIndexKolona;
//                }
//                ChangeIndexKolona = 0;
//
//            }
//        }
//
//        Zx += ChangeIndexRed;
//        Zy += ChangeIndexKolona;
//
//        if (Zx >= 0 && Zx < m && Zy >= 0 && Zy < n) {
//            if (pominati[Zx][Zy] == 1) {
//                cout << "GAME OVER Ouch";
//                return 0;
//            }
//        } else {
//            cout << "GAME OVER Ouch";
//            return 0;
//        }
//
//        if (Zx == Jx && Zy == Jy) {
//            cout << "NJAM";
//            return 0;
//        }
//
//        pominati[Zx][Zy] = 1;
//    }
//
//    cout << "GAME OVER" << endl;
//    return 0;
//}


// Vlatko
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//int proveriJabuka(int Zi, int Zj, int Ji, int Jj) {
//    if (Zi == Ji && Zj == Jj) {
//        return 1;
//    } else
//        return 0;
//}
//
//int proveriZid(int Zi, int Zj, int n, int m) {
//    if (Zi < 0 || Zi > n - 1 || Zj < 0 || Zj > m - 1) {
//        return 0;
//    }
//    return 1;
//}
//
//int main() {
//    int a[100][100] = {0};
//    int n, m, Ji, Jj, Zi = 0, Zj = 0;
//    a[0][0] = -1;
//    char nasoka[1000], pravec = 'N';//F L R
//    cin >> n >> m >> Ji >> Jj;
//    cin.getline(nasoka, 1000);
//    for (int i = 0; i < strlen(nasoka); ++i) {
//        if (nasoka[i] == 'F') {
//            if (pravec == 'N') {
//                Zi++;
//            }
//            if (pravec == 'D') {
//                Zj--;
//            }
//            if (pravec == 'L') {
//                Zj++;
//            }
//            if (pravec == 'G') {
//                Zi--;
//            }
//        } else if (nasoka[i] == 'L') {
//            if (pravec == 'N') {
//                pravec = 'L';
//                Zj++;
//            }
//            if (pravec == 'D') {
//                pravec = 'N';
//                Zi++;
//            }
//            if (pravec == 'L') {
//                pravec = 'G';
//                Zi--;
//            }
//            if (pravec == 'G') {
//                pravec = 'L';
//                Zj--;
//            }
//        }
//    }
//
//
//}
