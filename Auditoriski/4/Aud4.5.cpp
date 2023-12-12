//Од тастатура се внесуваат должини на три отсечки во произволен редослед.
// Да се провери дали од дадените отсечки може да се конструра триаголник.
// Ако може, да се испечати дали триаголникот е разностран, рамностран или рамнокрак
// и да му се пресмета плоштината.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c;
    cout<<"Vnesi dolzini na strani: "<<endl;
    cin>>a>>b>>c;
    if ((a + b <= c) || (a + c <= b) || (b + c <= a))
        cout<<"Ne moze da se konstruira triagolnik."<<endl;
    else {
        if (a == b && b == c)
            cout<<"Tragolnikot e ramnostran."<<endl; // equilateral
        else if (a == b || b == c || a == c)
            cout<<"Tragolnikot e ravnokrak."<<endl; // isosceles
        else
            cout<<"Tragolnikot e raznostran."<<endl; // scalene
        float p, s = (a + b + c) / 2;
        p = sqrt(s * (s - a) * (s - b) * (s - c));
        cout<<"Ploshtinata mu e :"<<p;
    }
    return 0;
}
//ako daden broj e deliv so 2 pec 1
//so 2 i 3 pecati 3 VO 4.7