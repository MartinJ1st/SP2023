#include <iostream>
using namespace std;
int main()
{
    int a[100];
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }

    for (int i = 0; i < n/2; ++i) {
        a[i]+=a[n-1-i];
        a[n-1-i]=a[i];
    }
    if(n%2!=0){
        a[n / 2] *= 2;
    }    for (int i = 0; i < n; ++i) {
        cout<<a[i]<<" ";
    }
    return 0;
}