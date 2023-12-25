#include <iostream>
#include <cstring>

using namespace std;

void removeSubstring(char *mainStr, const char *substr) {
    int dolz_A = strlen(mainStr);
    int dolz_B = strlen(substr);


    char *current = mainStr;
    char *tmp = mainStr;

    while ((current = strstr(current, substr)) != nullptr) {
        for (char* i = tmp; i < current; ++i) {
            cout << *i;
        }
        tmp = current + dolz_B;
        current += dolz_B;
    }
    cout << tmp;
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
