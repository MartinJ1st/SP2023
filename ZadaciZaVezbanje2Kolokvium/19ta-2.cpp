//#include <iostream>
//#include <cstring>
//
//char rekurzivno(char a[], int x, int n) {
//
//    if (n == 0) {
//        if (isalpha(a[n])) {
//            a[n] += x;
//            if (a[n] > 'z') {
//                return 'a';
//            } else if (a[n] > 'Z') {
//                return 'A';
//            }
//            return a[n];
//        }
//    }
//
//    if (isalpha(a[n])) {
//        a[n] += x;
//        if (a[n] > 'z') {
//            a[n] = 'a';
//        } else if (a[n] > 'Z') {
//            a[n] = 'A';
//        }
//    }
//    return rekurzivno(a, x, n - 1);
//
//}
//
//using namespace std;
//
//int main() {
//    char a[80];
//    int n, x;
//    cin >> n >> x;
//    cin.ignore();
//    for (int i = 0; i < n; ++i) {
//        cin.getline(a, 80);
//        for (int j = 0; j < strlen(a); ++j) {
//            { a[i] = rekurzivno(a, x, n - 1); }
//        }
//        cout << a;
//    }
//    return 0;
//}


#include <iostream>

using namespace std;

char transformChar(char ch, int shift) {
    if ('a' <= ch && ch <= 'z') {
        return (ch - 'a' + shift) % 26 + 'a';
    } else if ('A' <= ch && ch <= 'Z') {
        return (ch - 'A' + shift) % 26 + 'A';
    } else {
        return ch;
    }
}

void transformString(char *str, int shift) {
    if (*str != '\0') {
        *str = transformChar(*str, shift);
        transformString(str + 1, shift);
    }
}

int main() {
    int N, X;
    cin >> N;

    cin >> X;
    cin.ignore();
    for (int i = 0; i < N; ++i) {
        char input[80];
        cin.getline(input, 80);
        transformString(input, X);
        cout << input << endl;
    }

    return 0;
}
