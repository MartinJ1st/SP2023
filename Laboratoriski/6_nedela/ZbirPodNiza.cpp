#include <iostream>

using namespace std;

int main() {



    int n, niza[100],prvEl = 0, poslEl = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> niza[i];
    }

    int max = niza[0], zbir = niza[0];

    for (int i = 1; i < n; i++) {
        if (zbir >= 0) {
            zbir += niza[i];
        } else {
            zbir = niza[i];
            prvEl = i;
        }

        if (zbir > max) {
            max = zbir;
            poslEl = i;
        }
    }

    // Calculate the percentage
    int usedElements = poslEl - prvEl + 1;
    double procent = (double) usedElements / n * 100.0;

    cout << "Maximum Sum: " << max << endl;
    cout << "Percentage of Elements Used: "<<procent<<endl;

    return 0;
}