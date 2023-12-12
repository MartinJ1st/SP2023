#include <iostream>
using namespace std;
int main ()
{
    int suma=0;
    for(int i=11;i<98;i+=2)
    {
        cout<<i<<" + ";
        suma+=i;
    }
    /*
     do
     {
     suma+=i;
     i+=2;
     }
     while(i<100)
     */
    cout<<"99 = "<<suma+99;
    return 0;
}

//ima drug nacin