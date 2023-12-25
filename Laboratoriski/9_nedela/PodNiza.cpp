#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int ind1, ind2;
    char a[300], k;
    cin.getline(a, 300);
    cin >> k;
    cin.ignore();
    for (int i = 0; i < strlen(a); ++i) {
        if (tolower(a[i]) == tolower(k)) {
            ind1 = i;
            break;
        }
    }
    for (int i = strlen(a) - 1;i>=0 ; i--) {
        if (tolower(a[i]) == tolower(k)) {
            ind2 = i;
            break;
        }
    }

    for (int i = ind1; i <=ind2 ; ++i) {
        cout<<a[i];
    }
    return 0;
}