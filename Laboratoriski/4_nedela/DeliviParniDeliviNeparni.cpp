#include <iostream>
using namespace std;
int main(){
    int a,b,brojac=0;
    float brojac2=0;
    cin>>a>>b;
    for(int i=a+1;i<=b;i++){
        if(i%2==0 && i%7==0){
            cout<<i<<endl;
            brojac++;
        }
        else if(i%2!=0 && i%3!=0) {
            cout << i << endl;
            brojac++;
        }
        brojac2++;
    }
    cout<<(brojac/brojac2)*100<<"%";
    return 0;
}




