#include <iostream>
#include <cmath>
using namespace std;

//Да се напише програма која за зададена вредност на х (при декларација на променливата) ќе го пресмета и отпечати на екран х2.

int main() {
    int x = 7;
    cout << "Brojot " << x << " na kvadrat e " << x * x << endl;
    cout<<pow(x,2);
    return 0;
}