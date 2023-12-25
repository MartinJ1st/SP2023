#include <iostream>

using namespace std;

int main() {
    int n, a[100],b[100],c[100];
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int b1=0,c1=0,*pok=a,*pokP=b,*pokN=c;
    for (int i = 0; i < n; ++i) {
        if(a[i]%2==0){
            *pokP=a[i];
            b[b1]=*pokP;
            b1++;
        } else{
            *pokN=a[i];
            c[c1]=*pokN;
            c1++;
        }
    }


    return 0;
}