//Од стандарден влез се внесуваат два цели броја N и Х.
//
//Да се најде најблискот број помал од N коj е тотално различен од бројот Х.
//
//Еден број е тотално различен од друг ако и само ако во него не се појавува ниту една од цифрите на другиот број.
//
//Задачата да се реши без употреба на низи и матрици.

#include <iostream>
using namespace std;

int main() {
    int n,x;
    cin>>n>>x;
    int cifraN,cifraX, maxRazl = 0,temp,tempX;
    for(int i=n-1;i>=0;i--)
    {
        temp=i;
        tempX=x;
        while(temp!=0) {
            cifraN = temp % 10;
            cifraX = tempX % 10;
            if (cifraX == cifraN){break;}
            else{
                tempX /= 10;
                if(tempX==0){
                    tempX=x;
                    temp/=10;
                }
            }
        }
        if(temp==0){maxRazl=i;break;}
    }
    cout<<maxRazl;
    return 0;
}
