/*
 Да се напише програма во која од стандарден влез прво се внесува еден позитивен цел број z,
 а потоа последователно се внесуваат парови цели броеви (a, b).
 Внесувањето на парови цели броеви треба да заврши кога корисникот ќе го внесе парот (0, 0).
 Треба да се пресмета колку пати z е еднаков на збирот на секој внесен пар броеви a и b,
 како и колкав процент од вкупниот број внесени парови (a, b) даваат збир z
 (ЗАБЕЛЕШКА: парот (0, 0) не се зема во предвид при извршувањето на пресметките!).

For example:

Input	    Result
100         Vnesovte 2 parovi od broevi chij zbir e 100
50 50       Procentot na parovi so zbir 100 e 50.00%
-50 -50
-99 199
32 98
0 0
 */

#include <iostream>

using namespace std;

int main() {
    int z, a, b, brojacEden = 0, brojacDva = 0;
    cin >> z;

    while (cin >> a >> b) {
        if (a == 0 && b == 0) break;

        if ((a + b) == z) brojacEden++;

        brojacDva++;
    }
    // static_cast <float> brojacEden; brojacEden *1.0
    double procent = ((double) brojacEden / brojacDva) * 100;

    cout << "Vnesovte " << brojacEden << " parovi od broevi chij zbir e " << z << endl;
    cout << "Procentot na parovi so zbir " << z << " e ";
    printf("%.2f%%", procent); //printf("%.2f%%", (((float) brojacEden / brojacDva) * 100) );

    return 0;
}