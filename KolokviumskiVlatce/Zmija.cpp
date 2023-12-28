#include <iostream>
#include <cstring>

using namespace std;

int proveriJabuka(int Zi, int Zj, int Ji, int Jj) {
    if (Zi == Ji && Zj == Jj) {
        return 1;
    } else
        return 0;
}

int proveriZid(int Zi, int Zj, int n, int m) {
    if (Zi < 0 || Zi > n - 1 || Zj < 0 || Zj > m - 1) {
        return 0;
    }
    return 1;
}

int main() {
    int a[100][100] = {0};
    int n, m, Ji, Jj, Zi = 0, Zj = 0;
    a[0][0] = -1;
    char nasoka[1000], pravec = 'N';//F L R
    cin >> n >> m >> Ji >> Jj;
    cin.getline(nasoka, 1000);
    for (int i = 0; i < strlen(nasoka); ++i) {
        if (nasoka[i] == 'F') {
            if (pravec == 'N') {
                Zi++;
            }
            if (pravec == 'D') {
                Zj--;
            }
            if (pravec == 'L') {
                Zj++;
            }
            if (pravec == 'G') {
                Zi--;
            }
        } else if (nasoka[i] == 'L') {
            if (pravec == 'N') {
                pravec = 'L';
                Zj++;
            }
            if (pravec == 'D') {
                pravec = 'N';
                Zi++;
            }
            if (pravec == 'L') {
                pravec = 'G';
                Zi--;
            }
            if (pravec == 'G') {
                pravec = 'L';
                Zj--;
            }
        }
    }


}

//