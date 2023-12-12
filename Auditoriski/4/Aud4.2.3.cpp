#include <iostream>
using namespace std;
int main()
{
    int poeni;
    cin>>poeni;
    if(poeni<=50)
    {
        cout<<"5"<<endl;
    }
    else {
        cout<<(poeni + 9)/10<<endl;
    }
    return 0;
}