//Да се напише програма во која од стандарден влез прво се внесува еден позитивен цел број z, а потоа последователно се
// внесуваат парови цели броеви (a, b). Внесувањето на парови цели броеви треба да заврши кога корисникот ќе го внесе парот (0, 0). Треба да се пресмета колку
// пати z е еднаков на збирот на секој внесен пар броеви a и b, како и колкав процент од вкупниот број внесени парови (a, b)
// даваат збир z (ЗАБЕЛЕШКА: парот (0, 0) не се зема во предвид при извршувањето на пресметките!).

#include <iostream>

using namespace std;

int main() {
    int z;
    int a, b;
    int brojParovi = 0;
    int totalPairs = 0;
    cin >> z;

    while (true) {
        cin >> a >> b;
        if (a == 0 && b == 0) { break; }
        totalPairs++;
        if (a + b == z) { brojParovi++; }
    }

    if (totalPairs > 0) {
        double percentage = ((double) brojParovi / totalPairs) * 100;
        cout << "Vnesovte " << brojParovi << " parovi od broevi chij zbir e "
             << z << endl;
        printf("Procentot na parovi so zbir %i e %.2f%%", z, percentage);
    }
    return 0;
}
