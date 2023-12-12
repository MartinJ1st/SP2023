#include <iostream>
using namespace std;
int main()
{
    int a,god,mes,den;
    cin>>a;
    god=a/365;
    mes=(a%365)/30;
    den=a-(god*365+mes*30);
    cout<<"Years: "<<god<<", months: "<<mes<<", days: "<<den;
    return 0;
}