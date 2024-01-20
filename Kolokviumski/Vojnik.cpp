//Еден војник ги извршува командите за марширање на еден офицер. Војникот се движи по права патека само од исток кон
// запад или од запад кон исток. Командите кои му ги задава офицерот се: ‘F’ –чекор напред или ‘R’ –налево-круг
// (промена на ориентацијата на војникот на правата за 180º). Војникот на почетокот е на позиција 0 (на бројната оска)
// ориентиран кон исток (кон позитивната насока на бројната оска). Од тастатура се внесуваат командите на офицерот како
// низа од знаците ‘F’ и ‘R’. Напишете програма која ќе ја отпечати финалната позиција на војникот по извршената серија
// на команди. Серијата команди завршува со ‘.’ .

#include<iostream>
#include<cstring>

using namespace std;

int main() {
    int x = 0;
    int ix = 1; // gledakonistok
    char c;
    while ((c = cin.get()) != '.') {
        switch (c) {
            case 'F': // cekornapred
            case 'f':
                x += ix;
                break;
            case 'R': // NALEVO-KRUG
            case 'r':
                ix = -ix;
                break;
        }
    }

    cout << x << endl;
    return 0;
}