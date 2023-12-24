#include <iostream>
#include <cstring>
#include <iomanip>

#define MAX 100

using namespace std;

int main() {
    char a[MAX];
    int golMal = 0, golGol = 0, max = 0;
    while (cin.getline(a, MAX) && strcmp(a, "#") != 0) {
        for (int i = 0; i < strlen(a); ++i) {
            if (isalpha(a[i])) {
                max++;
                if (islower(a[i])) {
                    golMal++;
                } else
                    golGol++;
            }
        }
    }
    cout << (golMal / (float) max) << endl;
    cout << ((golGol / (float) max)) << endl;

    return 0;
}