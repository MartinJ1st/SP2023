//Да се испечати сумата на сите броеви деливи со 3 во интервал [A,B). A и B се внесуваат од тастатура
//за од 10 до 20 деливи со 3 се 12 15 18 и збирот е 45

#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    int sum=0;
    for(;a<b;a++){
        if(a%3==0)
            sum+=a;
    }
    cout<<sum;

    return 0;
}