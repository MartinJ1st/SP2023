#include <iostream>

using namespace std;

int main() {
    int A[100][100], M, N, i, j;
    bool isSymmetric;

    cin >> N >> M;
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            cin >> A[i][j];
        }
    }

    isSymmetric = true;
    for (i = 0; i < M && isSymmetric; i++) {
        for (j = 0; j < N; j++) {
            if (A[i][j] != A[j][i]) {
                isSymmetric = false;
                break;
            }
        }
    }

    if (isSymmetric) {
        cout << 1 << endl;
    } else {
        cout << -1 << endl;
    }
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}