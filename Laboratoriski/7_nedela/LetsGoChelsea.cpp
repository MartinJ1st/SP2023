#include <iostream>

using namespace std;

int main() {
    int m, n, x_igrac, y_igrac, x_topka, y_topka, x1_gol, y1_gol, x2_gol, y2_gol;
    char a[100][100];
    cin >> m >> n;
    cin >> x_igrac >> y_igrac;
    cin >> x_topka >> y_topka;
    cin >> x1_gol >> y1_gol >> x2_gol >> y2_gol;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == x_igrac && j == y_igrac) { a[i][j] = 'i'; }
            else if (i == x_topka && j == y_topka) { a[i][j] = 'o'; }
            else if ((i == x1_gol && j == y1_gol) || (i == x2_gol && j == y2_gol)) { a[i][j] = ']'; }
            else a[i][j] = '-';
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    int pom_x, pom_y;
    cin >> pom_x >> pom_y;

    x_topka += pom_x;
    y_topka += pom_y;
    if ((x_topka == x1_gol && y_topka == y1_gol) || (x_topka == x2_gol && y_topka == y2_gol)) {
        cout << "GOAL!";
    } else if (x_topka >= m || y_topka >= n || x_topka < 0 || y_topka < 0) {
        cout << "OUT!";
    } else {
        cout << "Novata pozicija na topkata e (" << x_topka << ", " << y_topka << ")" << endl;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (i == x_igrac && j == y_igrac) { a[i][j] = 'i'; }
                else if (i == x_topka && j == y_topka) { a[i][j] = 'o'; }
                else if ((i == x1_gol && j == y1_gol) || (i == x2_gol && j == y2_gol)) { a[i][j] = ']'; }
                else a[i][j] = '-';
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}