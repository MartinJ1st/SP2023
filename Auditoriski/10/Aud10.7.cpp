//Да се напише функција која во стринг што и се предава како влезен параметар ќе ги промени малите букви во големи и обратно, и ќе ги отстрани сите цифри и специјални знаци.
//
//Пример
//
//За низата:
//
//0v@ePr1m3R
//
//треба да се добие:
//
//VEpRMr

#include <iostream>
#include <cstring>

using namespace std;

void filter(char str[]) {
//    int i = 0, j = 0;
//    while (str[i] != '\0') {
//        if (isalpha(str[i])) {
//            if (islower(str[i]))
//                str[j] = toupper(str[i]);
//            else if (isupper(str[i]))
//                str[j] = tolower(str[i]);
//            j++;
//        }
//        i++;
//    }
//    str[j] = '\0';



}

int main() {
    int MAX = 100;
    char s[MAX];
    cin.getline(s,MAX);
    filter(s);
    cout << s << endl;
    return 0;
}