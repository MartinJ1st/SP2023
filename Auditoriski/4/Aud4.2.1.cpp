/*Да се напише програма што за внесен број на поени од испит ќе
генерира соодветна оценка според следната табела:

 0-50           5
 51-60          6
 61-70          7
 71-80          8
 81-90          9
 91-100         10
 */

#include <iostream>
using namespace std;
int main () {
    int poeni, ocenka = 0;
    cout<<"Vnesi poeni: "<<endl;
    cin>>poeni;
    if (poeni >= 0 && poeni <= 50) ocenka = 5;
    else if (poeni > 50 && poeni <= 60) ocenka = 6;
    else if (poeni > 60 && poeni <= 70) ocenka = 7;
    else if (poeni > 70 && poeni <= 80) ocenka = 8;
    else if (poeni > 80 && poeni <= 90) ocenka = 9;
    else if (poeni > 90 && poeni <= 100) ocenka = 10;
    else cout<<"Nevalidna vrednost na poeni!"<<endl;
    cout<<"Ocenka: "<<ocenka<<endl;
    return 0;
}