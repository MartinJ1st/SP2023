/*Да се напише програма каде од тастатура ќе се внесе цена на производ, број на рати на кои се исплаќа и камата
 * (каматата е број изразен во проценти од 0 до 100).  * Програмата треба да го испечати износот на ратата и вкупната
 * сума што ќе се исплати за производот
ПОМОШ: Пресметајте ја целата сума, па потоа ратата.*/
#include <iostream>
using namespace std;

int main()
{
    float cena, kamata, rata, vkupno;
    int brRati;
    cout << "Vnesete ja cenata na proizvodot: \n";
    cin >> cena;
    cout << "Vnesete go brojot na rati: ";
    cin >> brRati;
    cout << "Vnesete ja kamatata: ";
    cin >> kamata;
    vkupno = cena * (1 + kamata/100);
    rata = vkupno / brRati;
    cout << "Edna rata ke iznesuva: " << rata << endl;
    cout << "Vkupnata isplatena suma ke bide: " << vkupno;
    return 0;
}