#include <iostream>
using namespace std;

int main() {
    int redStudent;
    cin >> redStudent;

    int cas;
    cas= redStudent * 5 - 5;
    int minuti=0;
    while(cas % 60 != 0){
        cas-=5;
        minuti+=5;
    }
    cas/=60;

    if(cas >= 2){
        minuti+=30;
    }
    if(cas >= 3 && minuti >= 30){
        minuti+=30;
    }
    if(minuti>=60){
        cas++;
        minuti-=60;
    }
    if(cas >= 6 && minuti >= 1)
        cout<<"Studentot ne e voopsto usluzen";
    else
        cout << "Hours: " << cas << ", minutes: " << minuti;


    return 0;
}