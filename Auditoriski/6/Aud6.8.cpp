//Да се пресмета збирот:
//
//1! + (1 + 2)! + (1 + 2 + 3)! + …​ + (1 + 2 + …​ + n)!
//
//Користете функција за пресметување на збирот на првите k природни броеви
// Користете функција за пресметување факториел на еден природен број k

#include <iostream>
using namespace std;

int suma(int n) {
    int i;
    int s = 0;
    for(i = 1; i <= n; ++i) {
        s += i;
    }
    return s;
}

long int faktoriel(int n) {
    int result = 1;
    int i;
    for(i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    if(n > 0) {
        int i;
        long int result = 0;
        int s;
        for(i = 1; i < n; ++i) {
            s = suma(i);
            result += faktoriel(s);
            cout << s << "! + ";
        }
        s = suma(n);
        result += faktoriel(s);
        cout << s << "! = " << result;
    } else {
        cout << "Nevalidna vrednost" << endl;
    }
    return 0;
}