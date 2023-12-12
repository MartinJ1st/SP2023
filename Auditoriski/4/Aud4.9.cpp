#include <iostream>
using namespace std;

int main() {
    int vrednost, izbor;
    cout << "Внесете почетна вредност: ";
    cin >> vrednost;

    do {
        do {
            cout << "Мени:" << endl;
            cout << "1 - Зголеми" << endl;
            cout << "2 - Намали" << endl;
            cout << "3 - Дуплирај" << endl;
            cout << "0 - Крај" << endl;
            cout << "Избор: ";
            cin >> izbor;
        } while (izbor < 0 || izbor > 3);

        switch (izbor) {
            case 1:
                vrednost++;
                break;
            case 2:
                vrednost--;
                break;
            case 3:
                vrednost *= 2;
                break;
            case 0:
                cout << "Крај" << endl;
                break;
            default:
                cout << "Невалиден избор!" << endl;
                break;
        }

        cout << "Вредност = " << vrednost << endl;
    } while (izbor != 0);

    return 0;
}