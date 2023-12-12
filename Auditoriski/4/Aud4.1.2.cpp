#include <iostream>
using namespace std;
int main () {
    float x, y;
    cout<<"Vnesi koordinati"<<endl;
    cin>>x>>y;
    if (x > 0)
        if (y > 0)
            cout<<"I kvadrant."<<endl;
        else
            cout<<"IV kvadrant."<<endl;
    else if (y > 0)
        cout<<"II kvadrant."<<endl;
    else
        cout<<"III kvadrant."<<endl;
    return 0;
}
/*Одговор на прашања
1. Не, доколку внесеме за x или y вредност 0, ќе јави погрешни информации
2.Единствено за вредности различни од 0.*/