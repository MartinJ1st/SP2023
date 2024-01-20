#include <iostream>
using namespace std;
int faktoriel(int n)
{
    if(n<=1)
        return 1;
    return n* faktoriel(n-1);
}

int main()
{
    int N;
    cin>>N;
    cout<<faktoriel(N)<<endl;
    return 0;
}