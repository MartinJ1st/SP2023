//Daden broj od 4 cifri, zbirot na najznacajnata i najmalku znacajnata//

#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Vnesi broj: ";
    cin>>a;
    cout<<a%10+a/1000;     //за прва и последна цифра
    //cout<<a%100+a/100     за 2 по 2 цифри
    return 0;
}