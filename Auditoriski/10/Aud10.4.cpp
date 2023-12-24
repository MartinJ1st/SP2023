//Да се напише функција која ќе одредува дали една текстуална низа е подниза на друга текстуална низа.
//
//Пример
//
//face е подниза на Please faceAbook

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char a[100], b[100];
    cin.getline(a, 100);
    cin.getline(b, 100);
    cout<<strstr(a,b);

    for (int i = 0, j = 0; i < strlen(a); ++i) {
        if (a[i] == b[j]) {
            j++;
        } else {
            if (j > 0) {
                i-=j;
                j=0;
            }
        }
        if(j== strlen(b)){
            cout<<"Podniza e"<<endl;
            return 0;
        }
    }

    cout<<"Ne e podniza"<<endl;
    return 0;
}