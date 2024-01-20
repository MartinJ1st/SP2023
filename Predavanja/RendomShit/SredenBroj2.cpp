#include <iostream>
using namespace std;
int main()
{
    int n,broj,brojac=0,min=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>broj;
        int tmp=broj;
        if(broj<10){
            continue;
        }
        while(broj>9){
            if(broj%10>=(broj/10%10)){
                break;
            }
            broj/=10;
        }
        if(broj<10){
            if(brojac==0){
                min=tmp;
            }
            else if(min>tmp){
                min=tmp;
            }
            brojac++;
            cout<<tmp<<endl;
        }
    }
    if(brojac==0){
        cout<<-1;
    }
    return 0;
}