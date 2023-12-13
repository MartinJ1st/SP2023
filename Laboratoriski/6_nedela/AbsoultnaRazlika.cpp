#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int m,n,suml,sumd;
    cin>>m>>n;
    int a[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++)
            cin>>a[i][j];
    }
    if(n%2==1) {
        for (int i = 0; i < m; i++) {
            suml=0;
            sumd=0;
            //leva strama
            for (int j = 0; j < n/2; j++) {
                suml+=a[i][j];
            }
            //desna strana
            for (int j = n/2+1; j < n; j++) {
                sumd+=a[i][j];
            }
            a[i][n/2]= abs(suml-sumd);


        }
    }
    else if(n%2==0) {
        for (int i = 0; i < m; i++) {
            suml=0;
            sumd=0;
            //leva strama
            for (int j = 0; j < n/2; j++) {
                suml+=a[i][j];
            }
            //desna strana
            for (int j = n/2; j < n; j++) {
                sumd+=a[i][j];
            }
            a[i][n/2]= abs(suml-sumd);
            a[i][n/2-1]= abs(suml-sumd);


        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++) {
            cout <<a[i][j]<<" ";
        }
        cout<<endl;
    }

}