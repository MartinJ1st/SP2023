#include <iostream>
#include <cmath>
using namespace std;
    
int main() {
    float a = 5.0;
    float b = 7.5;
    float c = 10.2;
    float L = a + b + c;
    float s = L / 2;
    float P = s * (s - a) * (s - b) * (s - c);
    cout << "Perimetarot e: " << L << endl;
    cout << "Kvadratot na ploshtinata e: " << P << endl;
    cout << "Plostinata e: " << sqrt(P) << endl;
    return 0;
    }