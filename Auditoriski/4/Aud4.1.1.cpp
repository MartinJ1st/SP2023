//Од тастатура се внесуваат координати на една точка од рамнина. Да се напише
// програма со која ќе се испечати на кој квадрант припаѓа внесената точка.

#include <iostream>
using namespace std;

int main () {
    float x, y;
    cout<<"Vnesi koordinati"<<endl;
    cin>>x>>y;
    if (x > 0 && y > 0)
        cout<<"I kvadrant."<<endl;
    if (x > 0 && y < 0)
        cout<<"IV kvadrant."<<endl;
    if (x < 0 && y > 0)
        cout<<"II kvadrant."<<endl;
    if (x < 0 && y < 0)
        cout<<"III kvadrant."<<endl;
    return 0;
}