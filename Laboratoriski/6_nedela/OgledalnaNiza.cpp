#include <iostream>

using namespace std;

int main() {
    int N, b, br;
    float odnos;
    cin >> N;
    for (int i = 0; i < N; i++) {
        br = 0;
        cin >> b;
        int tmp = b;
        int a[b];
        for (int j = 0; j < b; j++) {
            cin >> a[j];
        }
        if (b % 2 != 0) {
            br++;
        }
        for (int k = 0; k < b / 2; k++) {
            if (a[k] == a[b - 1 - k]) { br += 2; }
        }
        odnos = br * 100.0 / (float) b;
        cout << "Odnos na ogledalni i ednakvi:";
        printf("%.2f%%", odnos);
        cout << endl;
    }
    return 0;

}