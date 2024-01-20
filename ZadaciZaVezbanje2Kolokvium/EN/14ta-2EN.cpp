//#include <iostream>
//
//using namespace std;
//
//int main() {
//    int N;
//    cin >> N;
//
//    int matrix[100][100];
//
//    for (int i = 0; i < N; ++i) {
//        for (int j = 0; j < N; ++j) {
//            cin >> matrix[i][j];
//        }
//    }
//
//    int changes = 0;
//    for (int i = 0; i < N; ++i) {
//        for (int j = 0; j < i; ++j) {
//            if (matrix[i][j] != matrix[j][i]) {
//                matrix[i][j] = matrix[j][i] = 1;
//                changes++;
//            }
//        }
//    }
//
//    for (int i = 0; i < N; ++i) {
//        if (matrix[i][i] == 1) {
//            matrix[i][i] = 0;
//            ++changes;
//        }
//    }
//
//    cout << changes << endl;
//
//    return 0;
//}

// BEZ IF I TERNAREN OPERATOR

#include <iostream>

using namespace std;


int main() {
    int N;
    cin >> N;

    int matrix[100][100], changes = 0;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < i; ++j) {
            changes += (matrix[i][j] != matrix[j][i]);
        }
        changes += (matrix[i][i] == 1);

    }
    cout << changes << endl;
    return 0;
}
