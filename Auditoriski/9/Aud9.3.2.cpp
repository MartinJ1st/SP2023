#include <iostream>

using namespace std;


bool prost_broj(int n,int i) {
    if (n == 1) {
        return false;
    }
    if (n == 2) {
        return true;
    }
    if (n % i == 0) {
        return false;
    }
    if (2 * i >= n) {
        return true;
    }

    return prost_broj(n,i+1);
}

int sledenProst (int n)
{
    if(prost_broj(n+1,2))
    {
        return n+1;
    }
    return sledenProst(n+1);
}
int main()
{
    int n;
    cin>>n;
    cout<<sledenProst(n)-n;
}