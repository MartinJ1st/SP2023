//Со Морзеовата азбука, знаците (букви, цифри) се претставуваат со точки и цртички. Цифрите од 0 до 4 се претставуваат,
// соодветно, на следниот начин: “—–”, “.—-”, “..—”, “…–”, “….-”. Од тастатура се внесува даден природен број N
// (N<100 000), и потоа се внесуваат N други природни броеви. За секој од внесените броеви, во посебен ред, да се
// отпечати остатокот при делењето на тој број со 5 во Морзеов код.

#include <iostream>
using namespace std;
int main()
{
    int n, broj;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> broj;
        if (broj % 5 == 0) {
            cout<<"-----"<<endl;
        } else if (broj % 5 == 1) {
            cout<<".----"<<endl;
        } else if (broj % 5 == 2) {
            cout<<"..---"<<endl;
        } else if (broj % 5 == 3) {
            cout<<"...--"<<endl;
        } else {
            cout<<"....-"<<endl;
        }
    }

    return 0;
}