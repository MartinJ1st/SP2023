//Од стандарден влез се читаат непознат број на хексадецимални цифри се додека не се внесе точка (.). Ваша задача е да го
// пресметате декадниот збир на внесените хексадецимални цифри. Доколку добиениот декаден збир е делив со 16 се печати Pogodok.
// Доколку истиот тој збир покрај што е делив со 16 плус завршува на 16 (последните цифри му се 1 и 6), се печати Poln pogodok инаку се печати самиот збир.
//
//Пример:
//
//влез: A 7 F 2 0 c A 5
//
//излез: 61
//
//(61 = 10 + 7 + 15 + 2 + 0 + 12 + 10 + 5, бројот не е делив со 16, ниту пак последните цифри му се 1,6)
#include <iostream>
using namespace std;
int main(){
    char a;
    int suma=0, flag=1;
    while (flag){
        cin>>a;
        if(a=='.')flag=0;
        else
        if(a>='0' && a<='9')suma+=a-'0';
        else if (a>='A' && a<='F')suma+=10+a-'A';
        else if (a>='a' && a<='f')suma+=10+a-'a';
    }

    if(suma%16==0 && suma%100==16)cout<<"Poln pogodok!";
    else if(suma%16==0) cout<<"Pogodok";
    else cout<<suma;
    return 0;
}