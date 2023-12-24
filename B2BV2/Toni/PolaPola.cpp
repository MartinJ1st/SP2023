
#include <iostream>
#include <cstring>

#define MAX 100

using namespace std;

int main() {
    char a[MAX];
    cin.getline(a, MAX);

    int middle = (int) strlen(a) / 2;
    char transformed[MAX];
    strcpy(transformed, a + middle);
    strncat(transformed, a, middle);
    cout << transformed;
    return 0;
}