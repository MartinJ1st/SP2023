#include<iostream>
#include<cstring>
#include<cctype>

using namespace std;

int main() {

    char contacts[100][100];

    int size = 0;
    while (cin.getline(contacts[size], 100)) {
        if (contacts[size][0] == '#') {
            break;
        }
        size++;
    }

    char contact[100];
    cin.getline(contact, 100);

    char type;
    cin >> type;


    for (int i = 0; i < size; i++) {
        if (strstr(contacts[i], contact)) {
//            cout << contacts[i];
            //d -> od vtor do tret space
            //m -> od tretiot space do krajot
            if (type == 'd') {
                bool flag = false;
                for (int j = 0; j < strlen(contacts[i]); j++) {
                    if (isdigit(contacts[i][j])) {
                        flag = true;
                    }
                    if (isspace(contacts[i][j]) && flag) {
                        flag = false;
                        break;
                    }
                    if (flag) {
                        cout << contacts[i][j];
                    }
                }
            } else {
                for (int j = strlen(contacts[i]) - 1; j >= 0; j--) {
                    if (isspace(contacts[i][j])) {
                        cout << contacts[i] + j + 1;
                        break;
                    }
                }
            }
        }
    }
    return 0;
}

//2 resenie

//#include<iostream>
//#include<cstring>
//#include<cctype>
//
//using namespace std;
//
///*
// *  Mare marevski
//    d
//    Ana Banevska 2345670 072345678 \
//    Cene Denevski 3450145 075551551 \
//    Mare marevski 325426 078566544 \
//    Sara Anovska 223305 070224566\
//    Dusko Pejovski 3244056 071222344\
// * */
//
//int main() {
//
////    char contacts[100][100];
//
//    char contact[100];
//
//    cin.getline(contact, 100);
//
//    char type;
//    cin >> type;
//
//    cin.get();
//
//    char phonebookContact[100];
//    while (cin.getline(phonebookContact, 100)) {
//        if (strstr(phonebookContact, contact)) {
////            cout << contacts[i];
//            //Dusko Pejovski 3244056 071222344
//            //d -> од првата цифра до последната цифра
//            //m -> od tretiot space do krajot
//            if (type == 'd') {
//                bool flag = false;
//                for (int j = 0; j < strlen(phonebookContact); j++) {
//                    if (isdigit(phonebookContact[j])) {
//                        flag = true;
//                    }
//                    if (isspace(phonebookContact[j]) && flag) {
//                        flag = false;
//                        break;
//                    }
//
//                    if (flag) {
//                        cout << phonebookContact[j];
//                    }
//                }
//            } else {
//                for (int j = strlen(phonebookContact) - 1; j >= 0; j--) {
//                    if (isspace(phonebookContact[j])) {
//                        cout << phonebookContact + j + 1;
//                        break;
//                    }
//                }
//            }
//            break;
//        }
//    }
//    return 0;
//}