#include <iostream>
using namespace std;

int main() {
    int ak1,ak2,ak3,ak4,ak5,poeni;
    cin>>ak1>>ak2>>ak3>>ak4>>ak5;
    poeni=ak1+ak2+ak3+ak4+ak5;
    if(poeni>50){
        if(poeni<=60){
            cout<<"Ocenka: 6, poeni: "<<poeni<<endl;}
        if(poeni>60 && poeni<=70){
            cout<<"Ocenka: 7, poeni: "<<poeni<<endl;}
        if(poeni>70 && poeni<=80){
            cout<<"Ocenka: 8, poeni: "<<poeni<<endl;}
        if(poeni>80 && poeni<=90){
            cout<<"Ocenka: 9, poeni: "<<poeni<<endl;}
        if(poeni>90 && poeni<=100){
            cout<<"Ocenka: 10, poeni: "<<poeni<<endl;}
    }
    else
        cout<<"Predmetot ne e polozen"<<endl;
    if((poeni>50 && poeni<91) && (poeni+9)/10!=10)
        if(poeni==50 ||poeni==60 ||poeni==70 ||poeni==80 ||poeni==90)
            cout<<"Ima uslov za povisoka ocenka";
        else
            cout<<"Nema uslov za povisoka ocenka";
    return 0;
}

