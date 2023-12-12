/* Да се напише програма која за даден природен број ја пресметува разликата помеѓу
 * најблискиот поголем од него прост број и самиот тој број.
 */

#include <iostream>
using namespace std;

int prost(int n) {
    int i;
    for(i = 2; i * i <= n; ++i) {
        if(n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int prv_pogolem_prost(int n) {
    do{
        n++;
    }while(!prost(n));
    return n;
}

int main() {
    int n;
    cin >> n;
    int pogolem_prost = prv_pogolem_prost(n);
    cout << pogolem_prost << " " << pogolem_prost - n;
    return 0;
}