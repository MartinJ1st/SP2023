//Од тастатура се читаат непознат број на позитивни цели броеви (со максимум 5 цифри) се додека не се внесе нешто различно од број.
// За секој број треба да се најде позицијата (од десно на лево) на првото појавување на најголемата цифра во составот на бројот
// (цифрата на единици се наоѓа на позиција 0). Потоа, да се испечати статистика за позициите на најдените цифри со максимална вредност во следниот формат:
//
//[позиција]: [вкупно броеви чија максимална цифра се наоѓа на таа позиција]
//0: 2
//1: 3
//2: 1
//3: 1
//4: 1
//
//за броевите 97654 48654 12345 12343 1263 12443 12643 12777

#include <iostream>

using namespace std;

int main() {

    int n;
    int zeros=0, ones=0, twos=0, threes=0, fours=0;
    int counter = 0;
    int num_saver, digit, max=0;

    while(cin>>n)
    {
        while(n!=0)
        {
            digit = n % 10;
            if(digit > max)
            {
                max = digit;
                num_saver = counter;
            }
            counter++;
            n/=10;
        }
        counter = 0;
        max = 0;
        if(num_saver == 0)
        {
            zeros+=1;
        }
        else if(num_saver == 1)
        {
            ones+=1;
        }
        else if(num_saver == 2)
        {
            twos+=1;
        }
        else if(num_saver == 3)
        {
            threes+=1;
        }
        else if(num_saver == 4)
        {
            fours+=1;
        }
    }
    cout<<"0: "<<zeros<<endl;
    cout<<"1: "<<ones<<endl;
    cout<<"2: "<<twos<<endl;
    cout<<"3: "<<threes<<endl;
    cout<<"4: "<<fours<<endl;

    return 0;
}
