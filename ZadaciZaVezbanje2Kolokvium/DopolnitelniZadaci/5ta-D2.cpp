#include <iostream>

using namespace std;

void transform(float a[50][50], float b[50][50], int br, int bc, int er, int ec, int row, int column) {
    for (int i = br; i <= er; i++) {
        for (int j = bc; j <= ec; j++) {
            int count;
            if (i == 0 && j == 0) {
                b[i][j] += a[i + 1][j] +
                           a[i + 1][j + 1] +
                           a[i][j + 1];
                count = 4;
            } else if (i == 0 && j == (column - 1)) {
                b[i][j] += a[i + 1][j] +
                           a[i + 1][j - 1] +
                           a[i][j - 1];
                count = 4;
            } else if (i == (row - 1) && j == 0) {
                b[i][j] += a[i - 1][j] +
                           a[i - 1][j + 1] +
                           a[i][j + 1];
                count = 4;
            } else if (i == (row - 1) && j == (column - 1)) {
                b[i][j] += a[i - 1][j] +
                           a[i - 1][j - 1] +
                           a[i][j + -1];
                count = 4;
            } else if (i == 0) {
                b[i][j] += a[i][j - 1] +
                           a[i][j + 1] +
                           a[i + 1][j - 1] +
                           a[i + 1][j] +
                           a[i + 1][j + 1];
                count = 6;
            } else if (i == (row - 1)) {
                b[i][j] += a[i][j - 1] +
                           a[i][j + 1] +
                           a[i - 1][j - 1] +
                           a[i - 1][j] +
                           a[i - 1][j + 1];
                count = 6;
            } else if (j == 0) {
                b[i][j] += a[i - 1][j] +
                           a[i + 1][j] +
                           a[i - 1][j + 1] +
                           a[i + 1][j + 1] +
                           a[i][j + 1];
                count = 6;
            } else if (j == (column - 1)) {
                b[i][j] += a[i - 1][j] +
                           a[i + 1][j] +
                           a[i - 1][j - 1] +
                           a[i + 1][j - 1] +
                           a[i][j - 1];
                count = 6;
            } else {
                b[i][j] +=
                        a[i - 1][j - 1] +
                        a[i - 1][j] +
                        a[i - 1][j + 1] +
                        a[i][j - 1] +
                        a[i][j + 1] +
                        a[i + 1][j - 1] +
                        a[i + 1][j] +
                        a[i + 1][j + 1];
                count = 9;
            }

            b[i][j] /= (float) (count);
        }
    }
}

int main() {
    int row, column;

    cin >> row >> column;

    float a[50][50];
    float b[50][50];

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            cin >> a[i][j];
            b[i][j] = a[i][j];
        }
    }

    int br, bc;
    int er, ec;
    cin >> br >> bc;
    cin >> er >> ec;

    transform(a, b, br, bc, er, ec, row, column);

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

// Se u main, osven pecatenje

//#include <iostream>
//#include <iomanip>
//
//#define MAX 50
//
//using namespace std;
//
//void printArray(float arr[MAX][MAX], int row, int column) {
//    for (int i = 0; i < row; i++) {
//        for (int j = 0; j < column; j++) {
//            cout << arr[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
//
//int main() {
//    int i, j, row, column;
//
//    cin >> row >> column;
//
//    float a[MAX][MAX];
//    float b[MAX][MAX];
//
//    for (i = 0; i < row; ++i) {
//        for (j = 0; j < column; ++j) {
//            cin >> a[i][j];
//            b[i][j] = a[i][j];
//        }
//    }
//
//    int br, bc;
//    int er, ec;
//    cin >> br >> bc;
//    cin >> er >> ec;
//
//    int count = 0;
//    for (i = br; i <= er; i++) {
//        for (j = bc; j <= ec; j++) {
//            count = 0;
//            if (i == 0 && j == 0) {
//                b[i][j] += a[i + 1][j] +
//                           a[i + 1][j + 1] +
//                           a[i][j + 1];
//                count = 4;
//            } else if (i == 0 && j == (column - 1)) {
//                b[i][j] += a[i + 1][j] +
//                           a[i + 1][j - 1] +
//                           a[i][j - 1];
//                count = 4;
//            } else if (i == (row - 1) && j == 0) {
//                b[i][j] += a[i - 1][j] +
//                           a[i - 1][j + 1] +
//                           a[i][j + 1];
//                count = 4;
//            } else if (i == (row - 1) && j == (column - 1)) {
//                b[i][j] += a[i - 1][j] +
//                           a[i - 1][j - 1] +
//                           a[i][j + -1];
//                count = 4;
//            } else if (i == 0) {
//                b[i][j] += a[i][j - 1] +
//                           a[i][j + 1] +
//                           a[i + 1][j - 1] +
//                           a[i + 1][j] +
//                           a[i + 1][j + 1];
//                count = 6;
//            } else if (i == (row - 1)) {
//                b[i][j] += a[i][j - 1] +
//                           a[i][j + 1] +
//                           a[i - 1][j - 1] +
//                           a[i - 1][j] +
//                           a[i - 1][j + 1];
//                count = 6;
//            } else if (j == 0) {
//                b[i][j] += a[i - 1][j] +
//                           a[i + 1][j] +
//                           a[i - 1][j + 1] +
//                           a[i + 1][j + 1] +
//                           a[i][j + 1];
//                count = 6;
//            } else if (j == (column - 1)) {
//                b[i][j] += a[i - 1][j] +
//                           a[i + 1][j] +
//                           a[i - 1][j - 1] +
//                           a[i + 1][j - 1] +
//                           a[i][j - 1];
//                count = 6;
//            } else {
//                b[i][j] +=
//                        a[i - 1][j - 1] +
//                        a[i - 1][j] +
//                        a[i - 1][j + 1] +
//                        a[i][j - 1] +
//                        a[i][j + 1] +
//                        a[i + 1][j - 1] +
//                        a[i + 1][j] +
//                        a[i + 1][j + 1];
//                count = 9;
//            }
//
//            b[i][j] /= (float) (count);
//        }
//    }
//
//    printArray(b, row, column);
//
//    return 0;
//}