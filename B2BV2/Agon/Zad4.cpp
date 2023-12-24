#include <iostream>
using namespace std;

int DecToBin(int n){
    if(n==1) return 1;
    return 10*DecToBin(n/2)+(n%2);
}

int main()
{
    int n;
    cin>>n;
    cout<<DecToBin(n);
}