#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int redenBroj;
    double maxProsek, maxSoodnos;
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        int suma = 0;
        double prosek = 0, soodnos = 0;
        for (int j = 0; j < m; ++j) {
            int tmp;
            cin >> tmp;
            suma += tmp;
        }
        prosek = (suma * 1.0) / m;
        int predmeti;
        cin >> predmeti;
        soodnos = (m * 1.0) / predmeti;
        double pom = soodnos * prosek + (1 - soodnos) * 5;
        if (i == 0 || pom > maxProsek) {
            redenBroj = i;
            maxProsek = pom;
            maxSoodnos = soodnos;
        }
    }
    cout << "Semester: " << redenBroj + 1 << endl;
    cout << "Grade point average : " << maxProsek << ", percentage of subjects passed: " << maxSoodnos * 100 << "%"
         << endl;
    return 0;
}