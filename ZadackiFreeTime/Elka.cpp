#include <iostream>
using namespace std;

void ElkoElkoPorasniUste23PediZaDaMozeDedoMrazDaroviDaRedi(int n){
    int i=0;
    while(i++){
        for (int j = 0; j < n; j++) {
            if(j>n/2-i && j<n/2+i)
                cout<<"*";
            else
                cout<<" ";
        }
        if(i==n/2+1)
            return;
        cout<<endl;
    }
}

int main()
{
    int k;
    cin>>k;
    ElkoElkoPorasniUste23PediZaDaMozeDedoMrazDaroviDaRedi(k);
    return 0;
}