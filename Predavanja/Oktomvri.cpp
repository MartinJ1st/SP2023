#include <iostream>
using namespace std;
int main()
{
    int b;
    cout<<"Vnesi do denesniot datum: ";
    cin>>b;
    if(b>0 && b<31)
    cout<<b+1<<". Oktomvri";
        else
            if (b==31)
                cout<<"1. Noemvri";
            else
                cout<<"Imas vneseno pogresen broj!";
    return 0;
}