#include <iostream>
using namespace std;
int main()
{
    int a,b, srd;
    cin>>a>>b;
    srd=(a+b)/2;
    a+=srd;
    b-=srd;
    cout<<"Razlikata e: "<<a-b;
    return 0;
}