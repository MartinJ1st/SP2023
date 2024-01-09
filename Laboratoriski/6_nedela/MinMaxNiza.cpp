#include <iostream>
using namespace std;
int main()
{
    int n,a[100],max=0,min=1;
    min<<=10;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
        if(a[i]>max){max=a[i];}
        if(a[i]<min){min=a[i];}
    }
    cout<<"MAX -> "<<max<<endl;
    cout<<"MIN -> "<<min<<endl;
    for (int i = 0; i < n; ++i) {
        cout<<a[i]+(max-min)<<" ";
    }
    return 0;
}