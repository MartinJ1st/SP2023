#include <iostream>
#include <cstring>

using namespace std;

int main() {

    bool flag = false;
    int br = 0;
    char a[100], b[100];
    cin >> a >> b;
    for (int i = 0; i < strlen(a); i++) {
        if (a[i] == b[0]) {
            flag = true;
            for (int j = 1; j < strlen(b); ++j) {
                if (a[j+i] != b[j]) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                br++;
            }
        }

    }
    cout << br;
    return 0;

}
