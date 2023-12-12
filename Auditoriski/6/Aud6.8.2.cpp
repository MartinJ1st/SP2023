#include <iostream>

using namespace std;


long int zbir(int broj) {
//    int zbir=0;
//    for (int i = 1; i < broj; i++) {
//        zbir+=i;
//    }
//    return zbir;

    if (broj == 1)return 1;
    return broj + zbir(broj - 1);
}

long int faktoriel(int broj) {
//    int pr=1;
//    for (int i = 1; i < broj; i++) {
//        pr*=i;
//    }
//    return pr;

    if (broj == 1) { return 1; }
    return broj * faktoriel(broj - 1);
}

int main() {
    int n;
    long int suma = 0;
    cin >> n;
    for (int i = 1; i < n; i++) {
        suma += faktoriel(zbir(i));
    }
    return 0;
}