#include <iostream>
using namespace std;

int main() {
    int broj1, broj2,vreme;
    double cenanapovik=0;
    cin>>broj1>>broj2>>vreme;
    if(vreme<30){
        cenanapovik = vreme*3;
    }
    else{
        cenanapovik =(30*3)+(vreme-30)*2;
    }
    int op1, op2;
    op1=broj1/1000000;
    op2=broj2/1000000;
    if( ( (op1==71 || op1==72 ||op1==73)&&(op2==71 || op2==72 ||op2==73) ) || ( (op1==74 || op1==75 ||op1==76)&&(op2==74 || op2==75 ||op2==76) ))
    {
        cout<<cenanapovik*7/10;
    }
    else
        cout<<cenanapovik;

    return 0;
}
