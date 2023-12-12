#include <iostream>
using namespace std;
int main()
{
    for(int i=1000; i<10000; i++)
    {
        int x = i/1000;
        int y = i/100%10;
        int z = i/10%10;
        int k = i%10;
        if(x==(y+z+k))
            cout<<i<<endl;
    }
    return 0;
}