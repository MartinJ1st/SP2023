#include <iostream>
using namespace std;
int main()
{
    int ax,ay,cx,cy, n;
    cin>>n;
    cin>>ax>>ay>>cx>>cy;
    //drugite tocki se pravat koristejki gi ovie dve
    int t1x,t1y,t2x,t2y;
    cin>>t1x>>t1y>>t2x>>t2y;
    if(t1x>=ax && t1x<=cx&& t1y>=ay && t1y<=cy){cout<<"DA";}
        else cout<<"NE";
    if(t2x>=ax && t2x<=cx&& t2y>=ay && t2y<=cy){cout<<"DA";}
        else cout<<"NE";

    return 0;
}