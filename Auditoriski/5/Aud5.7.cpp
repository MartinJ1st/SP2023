//Да се напише програма што од непознат број на цели броеви што се
// внесуваат од тастатура ќе го определи бројот со максимална вредност.
// Програмата завршува ако се внесе невалидна репрезентација на број.

#include <iostream>
using namespace std;

int main() {
    int n, max;
    if (cin >> max) {
        while (cin >> n) {
            if (max < n) {
                max = n;
            }
        }
        cout << max;
    } else {
        cout << "Ne e vnesen broj.";
    }
    return 0;
}