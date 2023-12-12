#include <iostream>
using namespace std;

int main() {
    int krediti,godina;
    double prosek;
    double poeni;
    double predvideniKrediti;
    cin>>krediti>>godina>>prosek;

    if(godina>=2010 && godina<=2023){
        if(krediti>100 && prosek >8){
            predvideniKrediti=(2023-godina)*60;
            poeni=((krediti*10)/predvideniKrediti + (prosek-8.5)*6.5);
            //poeni=(krediti/predvideniKrediti)*10;
            //poeni+=(prosek-8.5)*6.5;
            if(krediti>=240){
                cout<<"Needs to graduate! ";
            }
            if(prosek>9){
                cout<<"Great student! ";
            }

        }else{
            poeni=0;
        }
        cout<<"Points: "<<poeni;
    }

    return 0;
}