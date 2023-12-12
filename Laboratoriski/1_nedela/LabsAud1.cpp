//frla 5 pati paricka 5 ako e petka 0 ako e nula
//treba da pecate 1 ako ima nad 3 0

//Svetolik 4 pati frla para. 5 za petka 0 za nula. Kazi so kolku najmalku zavrtuvanja na parata site pari se na ista vrednost.

#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a+b+c+d==0 || a+b+c+d==20)
        cout<<"Ne treba da se vrte";
    if(a+b+c+d == 5 || a+b+c+d==15)
        cout<<"Treba 1 para da se svrti";
    else
        cout<<"Treba da se svrtat 2 paricki";
    return 0;
}
