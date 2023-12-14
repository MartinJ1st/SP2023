#include <iostream>
using namespace std;

int sum_pos(int *trmp,int ind,int n)
{
    if(ind>n){
        return 0;
    }

    int *pok,zbir=0;
    pok=trmp;
    for (int i = ind; i < n; ++i) {
        zbir+=trmp[i];
    }
    return zbir;
}

int main()
{
    int a[100],n,ind;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    cin>>ind;

    cout<<sum_pos(a,ind,n);
    return 0;
}