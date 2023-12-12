#include <iostream>
using namespace std;
int main()
{
    int god,mes,den;
    cin>>den;
    god=den/365;
    den%=365;
    mes=den/30;
    den%=30;
    cout<<"Years: "<<god<<", months: "<<mes<<", days: "<<den;
    return 0;
}