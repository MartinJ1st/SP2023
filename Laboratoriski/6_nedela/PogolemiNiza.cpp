#include <iostream>
using namespace std;

int main()
{
    int n,a[100];
    cin>>n;
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++) {
        int br=0;
        for (int j = i+1; j < n; j++) {
            if(a[i]<a[j]){
                br++;
            }
        }
        if(br>=2){
            cout<<a[i]<<" ";
        }
    }

    return 0;
}