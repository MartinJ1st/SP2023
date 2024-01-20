#include <iostream>
#include <cmath>
using namespace std;

double Geometriski(int broj){
    return pow(2,(broj-1));
}

int main()
{
    int n;
    cin>>n;
    cout<<Geometriski(n);
    return 0;
}