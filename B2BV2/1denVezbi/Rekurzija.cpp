#include <iostream>
using namespace std;

unsigned long int rek(long int a)
{
    if(a==0){
        return 0;
    }
    if((a%10)%2==0 && (a/10%10)%2!=0)
        return a%10 + rek(a/10);
    return rek(a/10);
}
int main()
{
    long int n;
    cin>>n;
    cout<<rek(n);
    return 0;
}