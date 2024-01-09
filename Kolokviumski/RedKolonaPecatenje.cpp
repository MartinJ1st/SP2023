#include<iostream>

using namespace std;

int main() {

    int m, n;
    cin >> m >> n;
    int matrix[100][100];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int column = 0;             // 1 kolona
    int column_i_end = m - 2;   // kraj na vertikalata nad zaednickiot
    int row = m - 1;            // posledniot red
    int column_j_start = 0;     // pocetok na redot za pecatenje

    while (row >= 0 && column < n) { //TO DO determine when the loop should end
        for (int i = 0; i <= column_i_end; i++) {
            cout << matrix[i][column] << " ";
        }
        ++column;
        column_i_end--;

        for (int j = column_j_start; j < n; j++) {
            cout << matrix[row][j];
        }
        row--;
        column_j_start++;
        cout << endl;
    }
    return 0;
}