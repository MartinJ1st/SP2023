#include <iostream>
using namespace std;

/* Да се напише програма каде од тастатура ќе се внесе цена на производ, а потоа ќе ја испечати неговата цена со пресметан ддв.
ПОМОШ: ДДВ е 18% од почетната цена*/

int main()
{
    float cena;
    cout << "Vnesete ja cenata na proizvodot: ";
    cin >> cena;
    cout << "Vkupnata cena na proizvodot e " << cena*1.18;
    return 0;
}