#include <iostream>
using namespace std;
int main () {
    float x, y;
    cout<<"Vnesi koordinati"<<endl;
    cin>>x>>y;
    if (x > 0)
        if (y > 0)
            cout<<"I kvadrant."<<endl;
            else if (y < 0)
                cout<<"IV kvadrant."<<endl;
                else
                cout<<"Pozitivna X oska."<<endl;
    else if (x < 0)
        if (y > 0)
            cout<<"II kvadrant."<<endl;
            else if (y < 0)
                cout<<"III kvadrant."<<endl;
                else
                cout<<"Negativna X oska."<<endl;
        else if (y > 0)
        cout<<"Pozitivna Y oska."<<endl;
            else if (y < 0)
            cout<<"Negativna Y oska."<<endl;
    else cout<<"Koordinaten pocetok.";
    return 0;
}