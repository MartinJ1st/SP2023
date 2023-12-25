#include <iostream>
#include <cstring>

using namespace std;

int main() {
    bool flag;
    int br, n;
    char a[50], b[] = "A1c";

    cin >> n;
    cin.ignore();

    for (int k = 0; k < n; k++) {
        cin.getline(a, 50);
        br = 0;
        for (int i = 0; i < strlen(a); i++) {
            if (tolower(a[i]) == tolower(b[0])) {
                flag = true;
                for (int j = 1; j < strlen(b); ++j) {
                    if (tolower(a[j + i]) != tolower(b[j])) {
                        flag = false;
                        break;
                    }
                }
                if (flag) {
                    br++;
                }
            }
        }

        if (br >= 2) {
            for (int j = 0; j < strlen(a); ++j) {
                a[j] = tolower(a[j]);
                cout << a[j];
            }
            cout << endl;
        }
    }

    return 0;
}
