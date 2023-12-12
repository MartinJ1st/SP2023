#include <iostream>

using namespace std;

bool Prost(int broj) {
    for (int i = 2; i < broj / 2; i++) {
        if (broj % 2 == 0) { return false; }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    if (Prost(n)) { cout << "Prost"; }
    else { cout << "Ne e prost"; }
    return 0;
}