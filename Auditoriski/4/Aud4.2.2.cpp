#include <iostream>
using namespace std;

int main () {
    int poeni, ocena = 0;
    cout<<"Vnesi poeni: "<<endl;
    cin>>poeni;
    if (poeni < 0 || poeni > 100)
        cout<<"Nevalidna vrednost za poeni!"<<endl;
    else {
        if (poeni > 90) ocena = 10;
        else if (poeni > 80) ocena = 9;
        else if (poeni > 70) ocena = 8;
        else if (poeni > 60) ocena = 7;
        else if (poeni > 50) ocena = 6;
        else ocena = 5;
        cout<<"Ocena: "<<ocena<<endl;
    }
    return 0;
}