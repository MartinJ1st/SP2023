#include <iostream>
using namespace std;
int main()
{
    int a,b, srd, razlika=0;
    cin>>a>>b;
    srd=(a+b)/2;
    a=a+srd;
    b=b-srd;
    razlika=a-b;
    cout<<"Razlikata e: "<<razlika;
    return 0;
}