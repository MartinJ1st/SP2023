#include <iostream>
using namespace std;
int main()
{
    int n,m,a[100][100];
    cin>>n>>m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin>>a[i][j];
        }
    }

    for (int k = 0; k < m; ++k) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if(i+j==k){
                    cout<<a[i][j]<<" ";
                }
            }
        }
        cout<<endl;
    }

    return 0;
}