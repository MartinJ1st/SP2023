#include <iostream>

using namespace std;

void scale(float a[], int n) {
    int ind;
    float max = a[0];
    for (int i = 1; i < n; ++i) {
        if (a[i] > max) {
            max = a[i];
            ind = i;
        }
    }
    float kolicnik = 100 / max;
    for (int i = 0; i < n; ++i) {
        if (i == ind) {
            a[i] = 100;
            printf("%.2f ",a[i]);
            continue;
        }
        a[i] *= kolicnik;
        printf("%.2f ",a[i]);
    }
}

int main() {

    int n;
    float a[100];
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    scale(a, n);
    return 0;
}