#include <iostream>
#include <cstring>

using namespace std;

void removeSubstring(char *mainStr, const char *substr) {
    int dolz_A = strlen(mainStr),dolz_B = strlen(substr), index = 0;

    for (int i = 0; i < dolz_A; ++i) {
        if (!(strncmp(mainStr + i, substr, dolz_B))) { //ako sporedbata ne e tocna da pecati i da pecati dodeka ne dojde na i
            for (int j = index; j < i; ++j) {
                cout << mainStr[j];
            }
            index = i + dolz_B;  //indeksot se zgolemuva za dolzB+indeksot koga ke najde razlicen start
        }
    }
    for (int j = index; j < dolz_A; ++j) {
        cout << mainStr[j];
    }
    mainStr[index] = '\0';
}

int main() {
    const int maxSize = 1000;
    char a[maxSize];
    char b[maxSize];
    cin.getline(a, maxSize);
    cin.getline(b, maxSize);
    cout << "String after removing the substring:" << endl;
    removeSubstring(a, b);

    return 0;
}





//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//void removeSubstringRecursive(char *mainStr, const char *substr) {
//    int lenMain = strlen(mainStr);
//    int lenSub = strlen(substr);
//
//    char *current = strstr(mainStr, substr);
//
//    if (current != nullptr) {
//        for (char *i = mainStr; i < current; ++i) {
//            cout << *i;
//        }
//
//        mainStr = current + lenSub;
//
//        removeSubstringRecursive(mainStr, substr);
//    } else {
//        cout << mainStr;
//    }
//}
//
//int main() {
//    const int maxSize = 1000;
//    char a[maxSize];
//    char b[maxSize];
//
//    cin.getline(a, maxSize);
//
//    cin.getline(b, maxSize);
//
//    cout << "String after removing the substring:" << endl;
//    removeSubstringRecursive(a, b);
//
//    return 0;
//}


//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//char *strstrdel(char *str, const char *substr) {
//    char *p = strstr(str, substr);
//
//    if (p) {
//        char *q = p + strlen(substr);
//        memmove(p, q, strlen(q) + 1);
//    }
//
//    return str;
//}
//
//int main() {
//    char strs[1000];
//    char sub[1000];
//    cin.getline(strs, 1000);
//    cin.getline(sub, 1000);
//
//    cout << "String after removing the substring:" << endl;
//    cout << strstrdel(strs, sub) << endl;
//    return 0;
//}