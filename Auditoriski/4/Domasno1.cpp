//За три внесени отсечки да се одреди дали е можно да се конструира триаголник и притоа
//дали триаголникот е правоаголен, остроаголен или тапоаголен.

#include <iostream>
using namespace std;
int main()
{
    float a, b, c;
    cout<<"Vnesi dolzini na strani: "<<endl;
    cin >> a >> b >> c; //a=BC, b=AC, c=AB
    if (a + b > c && a + c > b && b + c > a) //Услов за постоење на триаголник
    {
        if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
            cout << "Triagolnikot e pravoagolen." << endl;
            else if (a*a + b*b < c*c || a*a + c*c < b*b || b*b + c*c < a*a)
                cout << "Triagolnikot e tapoagolen" << endl;
                else
                    cout << "Triagolnikot e ostroagolen" << endl;
    }
    else
        cout << "Ne moze da se konstruira triagolnik so takvi dolzini na otsecki " << endl;
    return 0;
}