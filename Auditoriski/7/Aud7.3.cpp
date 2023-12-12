//Да се напише програма која ќе го пресмета скаларниот производ на две низи со по n елементи.
// Бројот на елементи n, како и вредностите на позициите на низата
// се внесуваат од стандарден влез. Резултатот да се испечати на екран

#include <iostream>

using namespace std;


int main() {
    int a[100], b[100], n,skalarenProizvod=0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++) {
        skalarenProizvod+=a[i]*b[i];
    }
    cout<<skalarenProizvod;
    return 0;
}