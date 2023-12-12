#include <iostream>

using namespace std;

bool Svetolik(int broj) {
    if (broj % ((broj / 100) + (broj % 100)) == 0) {
        return true;
    } else {
        return false;
    }
}


int main() {
    int br = 0;
    for (int i = 1000; i < 10000; i++) {
        if (Svetolik(i)) {
            cout << i << endl;
            br++;
        }
    }
    cout << br;
    return 0;
}