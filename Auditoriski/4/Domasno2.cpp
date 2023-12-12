//Мистерија како ќе е решението
#include <iostream>
    using namespace std;

    int main() {
        // Внеси ги координатите на центарот и радиусот на кружницата
        double x, y, r;
        cout << "Vnesi koordinati na centarot (x, y): ";
        cin >> x >> y;
        cout << "Radius: ";
        cin >> r;

        bool K1 = ((x + r) > 0) || ((y + r) > 0);
        bool K2 = ((x - r) < 0) || ((y + r) > 0);
        bool K3 = ((x - r) < 0) || ((y - r) < 0);
        bool K4 = ((x + r) > 0) || ((y - r) < 0);

        if (K1) {
            cout << "Kruznicata minuva niz kvadrant I." << endl;
        }
        if (K2) {
            cout << "Kruznicata minuva niz kvadrant II." << endl;
        }
        if (K3) {
            cout << "Kruznicata minuva niz kvadrant III." << endl;
        }
        if (K4) {
            cout << "Kruznicata minuva niz kvadrant IV." << endl;
        }

        return 0;
}
