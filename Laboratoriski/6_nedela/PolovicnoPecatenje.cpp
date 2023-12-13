#include <iostream>

using namespace std;

int main() {
    int a[100][100], n;
    cin>>n;

    for (int i=0; i<n; i++){
        for (int j=0; j<2*n; j++){
            cin>>a[i][j];
        }
    }

    for (int i=0; i<n; i++){  //prvata polovina
        for (int j=0; j<n; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    for (int i=0; i<n; i++){  //vtorata polovina
        for (int j=n; j<2*n; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}