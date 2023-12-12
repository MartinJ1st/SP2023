//Да се напише програма каде од стандарден влез се внесува еден 5 цифрен број.
// Програмата печати 1 доколку бројот е специјален, а 0 во спротивно.
//
//Еден број е специјален доколку за него важи дека е делив со збирот на својата втора
// и трета цифра и првата,третата и петтата цифра се во строго
//растечки редослед.
//
//Да се внимава на делење со 0, т.е. да се испечати -1 во таков случај.

#include <iostream>
using namespace std;

int main() {
    int broj;
    cout << "Vnesi 5 cifren broj: ";
    cin >> broj;

    if (broj < 10000 || broj > 99999)
    {
        cout << "Brojot ne e 5 cfiren." << endl;
    }
    else
    {
        int cifra1 = broj / 10000;
        int cifra2 = (broj / 1000) % 10;
        int cifra3 = (broj / 100) % 10;
        int cifra4 = (broj / 10) % 10;
        int cifra5 = broj % 10;

        if (cifra2 + cifra3 > 0)
        {
            if ((cifra1 < cifra3 && cifra3 < cifra5) && (broj % (cifra2 + cifra3) == 0))
                cout << "1" << endl;
            else
                cout << "0" << endl;
        }
        else cout << "-1" << endl;
    }
    return 0;
}