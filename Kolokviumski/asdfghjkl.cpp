//Од стандарден влез се внесува текст(се додека не се сигнализира EOF). Да се напише програма која ќе го отпечати
// зборот со максимална должина вокој не се појавува буква од четвртиот ред на тастатурата (“asdfghjk”). За збор се
// смета секвенца составена само од букви и одвоена со најмалку едно празно место од останатиот дел од текстот. Во
// текстот нема зборови подолги од 30 знаци.Да не се прави разлика помеѓу мали и големи букви.Доколку нема таков,
// да се испечати„NO SUCH WORD“.

#include<iostream>
#include<cstring>
#include<cctype>

using namespace std;

const char *rowl[3] = {"qwertyuiop", "asdfghjkl", "zxcvbnm"};

bool isinrow(char c, int r)
// 1<=r<=4, r=2,3,4 are valid
{
    return (strchr(rowl[r - 2], tolower(c)) != NULL);
}

bool neEVo4Red(char *s, int r) {
    while (*s) {
        if (isinrow(*s, r))
            return false;
        s++;
    }
    return true;
}

int main() {
    const int maxWordLength = 31;
    const int fromRow = 4;
    char word[maxWordLength], maxWord[maxWordLength];
    unsigned long maxWordLen = 0;
    while (!cin.eof()) {
        cin >> word;
        if (neEVo4Red(word, fromRow)) {
            unsigned long len = strlen(word);
            if (len > maxWordLen) {
                maxWordLen = len;
                strcpy(maxWord, word);
            }
        }
    }
    if (maxWordLen > 0)
        cout << maxWord << endl;
    else
        cout << "NO SUCH WORD" << endl;
    return 0;
}