#include <iostream>
using namespace std;
int main()
{
    char bukva;
    cin>>bukva;
    switch (bukva) {
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
            cout<<"Vmesovte samoglaska";
            break;
        default: cout<<"Ne e vnesena samoglaska";
    }
    return 0;
}