//Од тастатура се внесуваат знаци, за крај се внесува EOF.
// Да се напише програма која ќе ги трансформира внесените знаци и ќе ги испечатина екран.
// Трансформацијата се изведува не следниот начин: секоја внесена буква од која е од последниот ред букви на
// тастатурата “zxcvbnm” се заменува со соодветната буква од редот над неа “asd..hj” (односно со онаа која на
// тастатурата се наоѓа непосредно лево над неа). При тоа, треба да се задржи големината на буквата (големите букви од
// последниот ред се заменуваа со соодветните големи букви од редот над нив), или ‘z’ се заменува со ‘a’, ‘Z’ се
// заменува со ‘A’, ‘x’ се заменува со ‘s’, ... , ‘M’ се заменува со ‘J’. Останатите знаци се печатат неизменети.

#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;
const char *rowl[3] = {"qwertyuiop", "asdfghjkl", "zxcvbnm"};

bool isinrow(char c, int r) {
    return (strchr(rowl[r - 2], tolower(c)) != nullptr);
}

char replace(char c, int fromRow, int toRow) {
    char r = rowl[toRow - 2][strchr(rowl[fromRow - 2], tolower(c)) - rowl[fromRow - 2]];
    if (isupper(c)) { return toupper(r); }
    else { return r; }
}

int main() {
    int ROWFROM = 4, ROWTO = 3;
    char c;
    while ((c = cin.get()) != EOF) {
        if (isalpha(c) && isinrow(c, ROWFROM)) {
            cout << replace(c, ROWFROM, ROWTO);
        }
        else
            cout << c;
    }
    return 0;
}