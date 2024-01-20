#include <iostream>
using namespace std;

int BrojCifri(int broj){
    int tmpN = broj, br=0;
    while(tmpN){
        br++;
        tmpN/=10;
    }
    return br;
}

int ZbirCifri(int broj){
    int zbir=0,tmpN=broj;
    while (tmpN){
        zbir+=tmpN%10;
        tmpN/=10;
    }
    return zbir;
}

int main()
{
    int n;
    cin>>n;
    cout<<BrojCifri(n)<<endl;
    cout<<ZbirCifri(n)<<endl;
    return 0;
}