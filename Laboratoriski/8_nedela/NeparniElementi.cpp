#include <iostream>

using namespace std;

int zbir(int num) {
    if (num < 10) {
        if (num % 2 != 0) { return num; }
        return 0;
    }
    if(num%2==0){return 0+ zbir(num/10);}
    else return num%10+ zbir(num/10);
}

int main() {
    int n, a[100];
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for (int i = 0; i < n; ++i) {
        cout << zbir(a[i])<<endl;
    }
}