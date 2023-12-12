#include <iostream>
using namespace std;
int main ()
{
    int suma=0;
    for(int i=10;i<100;i+=2)
    {
        suma += i;
    }
    /*
     do
     {
     suma+=i;
     i+=2;
     }
     while(i<100)
     */
    cout<<suma;
    return 0;
}
