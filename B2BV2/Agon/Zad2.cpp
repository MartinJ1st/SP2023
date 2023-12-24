#include <iostream>
using namespace std;
int zbir(int num)
{
    if(num<10){
        return num;
    }
    return num%10+ zbir(num/10);
}

int main()
{
    int n;
    cin>>n;
    cout<<zbir(n);
}