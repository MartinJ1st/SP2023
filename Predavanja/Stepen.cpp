#include <iostream>
using namespace std;
int main()
{
    int n,i=1;
    double x,y=1;
    cin>>x>>n;
    while(i<=n)
    {
        y*=x;
        i++;
    }
    cout<<y;
}