/*
 Милан и Марко играат повеќе партии „модифициран финки“ покер (само со картите J, Q, K и A).
 Победник на секоја партија покер е оној играч чии карти имаат поголем збир (J=12, Q=13, K=14 и A=15).
 На стандарден влез првин се внесува бројот n број на партии кои биле одиграни од Милан и Марко.
 Потоа Влатко во следните n партии дели по 4 карти (пр. J A K Q),
 каде првите две карти се картите на Милан (J и A, збир 27),
 другите две карти се карти на Марко (K и Q, збир 27).
 За секоја партија соодветно да се испечати името на победникот во нов ред,
 доколку Милан и Марко имаат ист збир на карти да се испечати Neresheno.
 Во последен ред да се испечати бројот на победи на Милан и Марко оделени со празно место.

For example:

Input	     Result
2            Marko
J J K Q      Martin
A K Q K      1 1

 */

#include <iostream>

using namespace std;

int main() {

    int n, zbirMarko = 0, zbirMartin = 0, pobediMarko = 0, pobediMartin = 0;

    char a, b, c, d;
    cin >> n;

    if( n<=0){
        cout<<"Finki nema zgrada";
        return 0;
    }

    for (int i = 0; i < n; i++) {
        cin >> a >> b >> c >> d;  // a & b == Martin  c & d == Marko

//        if(!isalpha(a)  || !isalpha(b) || !isalpha(c) || !isalpha(d)){
//            cout<<"Finki nema zgrada";
//            return 0;
//        }

        if(isdigit(a)  || isdigit(b) || isdigit(c) || isdigit(d)){
            cout<<"Finki nema zgrada";
            return 0;
        }

        zbirMartin = zbirMarko = 0;

        // j= 12 q =13 k=14 a=15

//       char  var1[2]={'j','J'},
//             var2[2]={'q', 'Q'},
//             var3[2]={'k', 'K'},
//             var4[2]={'a', 'A'};

//       for(int j=0; j<2; j++){
//        if (a == var1[j]) zbirMartin += 12; // џандар
//        else if (a == var2[j]) zbirMartin += 13; //кралица
//        else if (a == var3[j]) zbirMartin += 14; // поп/крал
//        else if (a == var4[j]) zbirMartin += 15; // АС / единица
//
//        if (b == var1[j]) zbirMartin += 12; // џандар
//        else if (b == var2[j]) zbirMartin += 13; //кралица
//        else if (b == var3[j]) zbirMartin += 14; // поп/крал
//        else if (b == var4[j]) zbirMartin += 15; // АС / единица
//
//        if (c == var1[j]) zbirMarko += 12; // џандар
//        else if (c == var2[j]) zbirMarko += 13; //кралица
//        else if (c == var3[j]) zbirMarko += 14; // поп/крал
//        else if (c == var4[j]) zbirMarko += 15; // АС / единица
//
//        if (d == var1[j]) zbirMarko += 12; // џандар
//        else if (d == var2[j]) zbirMarko += 13; //кралица
//        else if (d == var3[j]) zbirMarko += 14; // поп/крал
//        else if (d == var4[j]) zbirMarko += 15; // АС / единица
//       }

        if (toupper(a) == 'J' ) zbirMartin += 12; // џандар
        else if (toupper(a) == 'Q') zbirMartin += 13; //кралица
        else if (toupper(a) == 'K') zbirMartin += 14; // поп/крал
        else if (toupper(a) == 'A') zbirMartin += 15; // АС / единица

        if (toupper(b) == 'J') zbirMartin += 12; // џандар
        else if (toupper(b) == 'Q') zbirMartin += 13; //кралица
        else if (toupper(b) == 'K') zbirMartin += 14; // поп/крал
        else if (toupper(b) == 'A') zbirMartin += 15; // АС / единица

        if (toupper(c) == 'J') zbirMarko += 12; // џандар
        else if (toupper(c) == 'Q') zbirMarko += 13; //кралица
        else if (toupper(c) == 'K') zbirMarko += 14; // поп/крал
        else if (toupper(c) == 'A') zbirMarko += 15; // АС / единица

        if (toupper(d) == 'J') zbirMarko += 12; // џандар
        else if (toupper(d) == 'Q') zbirMarko += 13; //кралица
        else if (toupper(d) == 'K') zbirMarko += 14; // поп/крал
        else if (toupper(d) == 'A') zbirMarko += 15; // АС / единица


        if (zbirMarko > zbirMartin) {
            cout << "Marko" << endl;
            pobediMarko++;
        } else if (zbirMarko < zbirMartin) {
            cout << "Martin" << endl;
            pobediMartin++;
        } else {
            cout << "Neresheno" << endl;
        }
    }
    cout << pobediMarko << " " << pobediMartin;

//    for (int i = 0; i < n; ++i) {
//        cin >> a >> b >> c >> d;
//        zbirMartin=zbirMarko=0;
//
//    switch (a) {
//        case 'J':  zbirMartin += 12; break;
//        case 'Q':  zbirMartin += 13; break;
//        case 'K':  zbirMartin += 14; break;
//        case 'A':  zbirMartin += 15; break;
//
//        default: cout<<"Pogreshna bukva";
//    }
//
//    switch (b) {
//        case 'J':  zbirMartin += 12; break;
//        case 'Q':  zbirMartin += 13; break;
//        case 'K':  zbirMartin += 14; break;
//        case 'A':  zbirMartin += 15; break;
//
//        default: cout<<"Pogreshna bukva";
//    }
//
//    switch (c) {
//        case 'J':  zbirMarko += 12; break;
//        case 'Q':  zbirMarko += 13; break;
//        case 'K':  zbirMarko += 14; break;
//        case 'A':  zbirMarko += 15; break;
//
//        default: cout<<"Pogreshna bukva";
//    }
//      switch (d) {
//        case 'J':  zbirMarko += 12; break;
//        case 'Q':  zbirMarko += 13; break;
//        case 'K':  zbirMarko += 14; break;
//        case 'A':  zbirMarko += 15; break;
//
//        default: cout<<"Pogreshna bukva";
//    }
//        if (zbirMarko > zbirMartin) {
//            cout << "Marko" << endl;
//            pobediMarko++;
//        } else if (zbirMarko < zbirMartin) {
//            cout << "Martin" << endl;
//            pobediMartin++;
//        } else {
//            cout << "Neresheno" << endl;
//        }
//    }
//
//    cout << pobediMarko << " " << pobediMartin;

    return 0;
}