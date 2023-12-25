//Да се напише функција која за дадена текстуална низа ќе одредува дали таа е доволно сложена за да биде лозинка.
//
//Секоја лозинка мора да содржи барем една буква, барем една цифра и барем еден специјален знак.
//
//Пример
//
//zdr@v0! е валидна лозинка.
//
//zdravo не е валидна лозинка.


#include <iostream>
#include <cstring>

using namespace std;

//int e_validna_lozinka(char str[]) {
//    int bukvi = 0, cifri = 0, spec = 0;
//    for (int i = 0; str[i] != '\0'; i++) {
//        if (isalpha(str[i]))
//            bukvi++;
//        else if (isdigit(str[i]))
//            cifri++;
//        else
//            spec++;
//    }
//    return (bukvi > 0 && cifri > 0 && spec > 0);
//}

bool proverka_lozinka(char a[])
{
    bool bukva=false,broj=false,znak=false;
    for (int i = 0; i < strlen(a); ++i) {
        if(isalpha(a[i])){bukva=true;}
        else if(isdigit(a[i])){broj= true;}
        znak= true;
    }
    return bukva && broj && znak;

}
int main() {
    int MAX = 100;
    char a[MAX];
    cin.getline(a,MAX);
    if (proverka_lozinka(a))
        cout << "e validna lozinka.";
    else
        cout << "NE e validna lozinka.";
    return 0;
}