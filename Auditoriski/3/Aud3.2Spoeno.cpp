#include <iostream>>
using namespace std;
int main() {
    char a;
    cin >> a;

    if (a >= 'a' && a <= 'z') {
        cout << "Mala bukva" << endl;
    }
        if (a >= 'A' && a <= 'Z'){
            cout << "Golema bukva" << endl;
        }
            if (a >= '0' && a <= '9'){
            cout << "Brojka" << endl;
            }


    return 0;
}