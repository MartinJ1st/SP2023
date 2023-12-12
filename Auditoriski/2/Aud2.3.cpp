#include <iostream>
using namespace std;

// Да се напише програма која ќе ја пресметува вредноста на математичкиот израз: x = 3/2 + (5 – 46*5/12)
int main(){
    float x = 3.0 / 2 + (5 - 46 * 5.0 / 12);
    cout << "x = " << x << endl;
    return 0;
}