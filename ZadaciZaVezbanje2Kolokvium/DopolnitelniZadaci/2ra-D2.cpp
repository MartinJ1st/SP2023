#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int n = 1;
    while (n * n < N) {
        n++;
    }

    int matrix[400][400] = {0};

    int currentNumber = 1;
    for (int j = 0; j < n; j++) {
        if(currentNumber>N){break;}
        if (j % 2 == 0) {
            for (int i = 0; i < n; i++) {
                matrix[i][j] = currentNumber;
                currentNumber++;
                if (currentNumber > N) break;
            }
        } else {
            for (int i = n - 1; i >= 0; i--) {
                matrix[i][j] = currentNumber;
                currentNumber++;
                if (currentNumber > N) break;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}