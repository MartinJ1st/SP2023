#include <iostream>
using namespace std;

//Да се напише програма за пресметување и печатење на плоштината и периметарот на круг. Радиусот на кругот се чита од стандарден влез (тастатура) како децимален број.

int main() {
        float radius;
        cin>>radius;

        float perimetar = 2 * radius * 3.14;
        float ploshtina = radius * radius * 3.14;
    
        cout << "L = " << perimetar << endl;
        cout << "P = " << ploshtina << endl;
        return 0;
    }