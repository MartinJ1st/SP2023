// Да се напише рекурзивна функција која што прима еден аргумент број x
// која што ќе враќа 1 доколку секоја цифра во бројот е помала од предходната, а во спротивно 0.
// Пример бројот 54321 е опаѓачки, додека пак бројот 54123 не е опаѓачки број.
// Од стандарден влез се вчитува прво број N, а потоа N броеви.
// За секој број да се испечати 1 или 0 (во нов ред), доколку бројот е опаѓачки или не е опаѓачки.

#include <iostream>

using namespace std;

bool opagjacka(int x) {
    if (x < 10) {
        return true;
    }
    if (x < 100) {
        return x % 10 < x / 10 % 10;
    }
    if (x % 10 < x / 10 % 10 == opagjacka(x / 10)) {
        return x % 10 < x / 10 % 10;
    } else
        return false;
}

int main()
{
    int n,broj;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>broj;
        cout<<opagjacka(broj)<<endl;
    }
    return 0;
}
