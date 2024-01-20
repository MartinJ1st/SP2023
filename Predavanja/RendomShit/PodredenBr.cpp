#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int vkupno_podredeni_broevi = 0;
    int broj;

    for (int i = 0; i < n; i++) {
        cin >> broj;
        int temp;
        temp = broj;
        while (temp >= 10) {
            if (temp % 10 < (temp / 10) % 10) {
                break;
            }
            temp /= 10;
        }
        cout << broj << endl;
        vkupno_podredeni_broevi++;
    }
    cout << vkupno_podredeni_broevi << endl;


    return 0;
}