#include <iostream>
#include <cstring>

using namespace std;

int main() {
    bool flag = false;
    int n, k, br = 0;
    char c, a[100];
    cin >> n >> k >> c;
    cin.ignore();
    for (int i = 0; i < n; ++i) {
        br = 0;
        cin.getline(a, 100);
        for (int j = 0; j < strlen(a); ++j) {
            if (tolower(a[j]) == tolower(c)) {
                br++;
            }
        }
        if (br == k) {
            cout << a << endl;
            flag = true;
        }
    }
    if (!flag) {
        cout << "NONE" << endl;
    }

    return 0;
}