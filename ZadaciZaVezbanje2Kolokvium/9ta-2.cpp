#include <iostream>
using namespace std;

float rekurzija(int niza[], int i, int n)
{
    if(i==n-1){return niza[i];}
    return niza[i]+1/ rekurzija(niza,i+1,n);
}
int main()
{
    int a[100],n;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    cout<<rekurzija(a,0,n);


    return 0;
}