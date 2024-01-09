#include <iostream>

using namespace std;

int main() {
    int m, n, a[100][100], max,zbir=0;
    cin >> m >> n;
    for (int i = 0; i < m; ++i) {
        max = 0;
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
            if(max<a[i][j]){max=a[i][j];}
        }
        a[i][n-1]=max;
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            zbir+=a[i][j];
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<zbir/(float)(m*n);


    return 0;
}
