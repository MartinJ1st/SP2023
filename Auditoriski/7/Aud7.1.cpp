//Да се напише програма која за 2 низи внесена од тастатура ќе провери дали се еднакви
//Еднакви се ако имаат иста големина и сите елементи се истите во истата позиција на двете низи

#include <iostream>

using namespace std;


int main() {
    int sizeA, sizeB, max, i;
    int a[100], b[100];
    cin >> sizeA >> sizeB;
    if (sizeA != sizeB) {
        cout << "Ne se ednakvi!" << endl;
    } else {
        cout << "Elementi na niza A se: " << endl;
        for (i = 0; i < sizeA; i++) {
            cout << "a[" << i << "] = ";
            cin >> a[i];
            cout << endl;
        }
        cout << "Elementi na niza B se: " << endl;
        for (i = 0; i < sizeB; i++) {
            cout << "b[" << i << "] = ";
            cin >> b[i];
            cout << endl;
        }
        for (i = 0; i < sizeA; ++i) {
            if (a[i] != b[i]) {
                break;
            }
        }
        if (i == sizeA) {
            cout << "Nizite se ednakvi" << endl;
        }
        else
        { cout << "Nizite ne se ednakvi" << endl; }
    }

    return 0;
}