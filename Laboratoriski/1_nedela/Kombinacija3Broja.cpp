#include <iostream>
using namespace std;
int main()
{
    int a,b,c,br;
    cin>>a>>b>>c;
    br=a*100+b*10+c;
    cout<<br<<endl;
    cout<<br-a<<" "<<br-b<<" "<<br-c;
    return 0;
}