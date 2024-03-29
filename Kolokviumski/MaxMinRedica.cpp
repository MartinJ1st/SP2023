//Од стандарден влез се внесува правоаголна матрица. Прво се внесуваат димензиите (0<M<100, 1<N<100) а потоа и
// елементите на матрицата (цели броеви) по редици. Да се напише програма која матрицата ќе ја трансформира на следниот
// начин: во зависност од вредноста на првиот елемент во секоја редица (дали е парен или непарен) треба да се пронајде
// максималната (ако првиот елемент во редицата е парен), односно минималната (ако првиот елемент во редицата е непарен)
// вредност од останатите елементи во редицата (не земајќи го предвид првиот елементво редицата) и оваа вредност треба
// да се ископира на местото на првиот елемент во таа редица, а на најзино место треба да се запише 0. Доколку
// минималната/максималната вредност се појавува повеќе пати во редицата се зема онаа која е поблиску до левиот раб на
// матрицата. На излез да се отпечати трансформираната матрица.

#include <iostream>

using namespace std;

int main() {
    int m, n, a[100][100];
    cin >> m >> n;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }

    for (int i = 0; i < m; i++) { // for each row
        int iextreme = 1; // row of min or max
        if (a[i][0] % 2 == 0) // even -> search for max
        {
            for (int j = 1; j < n; j++)
                if (a[i][j] > a[i][iextreme])
                    iextreme = j;
        } else // odd -> search for min
        {
            for (int j = 1; j < n; j++)
                if (a[i][j] < a[i][iextreme])
                    iextreme = j;
        }
        a[i][0] = a[i][iextreme];
        a[i][iextreme] = 0;
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}
