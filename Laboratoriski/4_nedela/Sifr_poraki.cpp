#include <iostream>

using namespace std;

int main() {
    int broj, brojac;
    char c;
    cin >> c;
    cin >> broj;
    brojac = 0;
    while (broj) {
        if (brojac % 2 == 0) { cout << c; }
        else {
            cout << broj % 10;
        }
        brojac++;
        broj /= 10;
    }
    return 0;
}

//#include <iostream>
//using namespace std;
//int main()
//{
//    char a;
//    int b;
//    cin>>a;
//    cin>>b;
//    int br=0;
//    while(b>0){
//        if(br%2==0)
//            cout<<a;
//        else
//        {
//            cout<<b%10;}
//        br++;
//        b=b/10;
//        }
//    return 0;
//    }
