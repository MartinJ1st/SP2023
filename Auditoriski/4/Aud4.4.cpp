//Од тастатура се внесуваат должини на три отсечки во произволен редослед.
// Да се напише програма што ќе провери дали од отсечките може да се конструира триаголник,
// при што ако може, да се провери дали истиот е правоаголен и да се пресмета неговата
// плоштина. Во спротивно, треба да се испечатат соодветни пораки.

#include <iostream>
using namespace std;

int main() {
    float a, b, c, tmp;
    cout<<"Vnesi dolzini na strani: "<<endl;
    cin>>a>>b>>c;
    if ((a + b <= c) || (a + c <= b) || (b + c <= a))
        cout<<"Ne moze da se konstruira triagolnik."<<endl;
    else {
        if (a >= b) {
            tmp = a;
            a = b;
            b = tmp;
        }
        if (a >= c) {
            tmp = a;
            a = c;
            c = tmp;
        }
        if (b >= c) {
            tmp = b;
            b = c;
            c = tmp;
        } // po ova najdolgata strana kje bide vo c
        if (c * c == a * a + b * b) {
            cout<<"Tragolnikot e pravoagolen."<<endl;
            cout<<"Ploshtinata mu e: "<<a * b / 2;
        } else {
            cout<<"Tragolnikot NE e pravoagolen."<<endl;
        }
    }
    return 0;
}

//ima i drug nacin na resavanje