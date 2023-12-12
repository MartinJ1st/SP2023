//Да се напише програма за пресметување на возраста на едно куче во човечки години. Кучешката
//возраст се чита од стандарден влез. Доколку се внесе негативен број за возраста, да се
//испечати следната порака: “Vozrasta mora da bide pozitiven broj”.
//Забелешка: За првите две години, една кучешка година е еднаква на 10,5 човечки години.
//После тоа, секоја кучешка година е еднаква на 4 човечки години.

#include <iostream>

using namespace std;

int main() {
    int kucheskaVozrast, chovecheskaVozrast;

    cout << "Vnesete kucheshka vozrast: ";
    cin >> kucheskaVozrast;

    if (kucheskaVozrast < 0) {
        cout << "Vozrasta mora da bide pozitiven broj" << endl;
    } else {
        if (kucheskaVozrast <= 2) {
            chovecheskaVozrast = kucheskaVozrast * 10.5;
        } else {
            chovecheskaVozrast = 21 + (kucheskaVozrast - 2) * 4;
        }

        cout << "Chovecheska vozrast na kucheto e: " << chovecheskaVozrast << endl;
    }

    return 0;
}