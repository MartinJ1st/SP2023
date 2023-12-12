//Exercise 1: Write a C++ program that asks the user to enter a positive integer n and then prints the first n terms of
// the following sequence: 1, 3, 6, 10, 15, 21, 28, … Use a function that takes an integer as a parameter and returns
// the n-th term of the sequence using a formula.

#include <iostream>

using namespace std;

int Niza(int n) {
    int zbir = 0;
    for (int i = 1; i <= n; i++) {
        zbir += i;
        cout << zbir<<" ";
    }
    return true;
}


int main() {
    int n;
    cin >> n;
    Niza(n);
    return 0;
}