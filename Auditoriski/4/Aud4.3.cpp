//Да се промени Aud4.2 (претходната програма), така што покрај оценките ќе се испечатат и
// знаците + и – во зависност од вредноста на последната цифра на поените:

/*
 1-3    -
 4-7    [ ]
 8-0    +
 */

#include <iostream>
using namespace std;
int main () {
    int poeni, ocenka = 0;
    cout<<"Vnesi poeni: "<<endl;
    cin>>poeni;
    if (poeni < 0 || poeni > 100)
        cout<<"Nevalidna vrednost za poeni!"<<endl;
    else {
        if (poeni > 90) ocenka = 10;
        else if (poeni > 80) ocenka = 9;
        else if (poeni > 70) ocenka = 8;
        else if (poeni > 60) ocenka = 7;
        else if (poeni > 50) ocenka = 6;
        else ocenka = 5;
        char znak = ' ';
        int pc = poeni % 10;
        if (ocenka != 5) {
            if (pc >= 1 && pc <= 3) znak = '-';
            else if (ocenka != 10 && (pc >= 8 || pc == 0))
                znak = '+';
        }
        cout<<"Ocena: "<<ocenka<<znak<<endl;
    }
    return 0;
}
