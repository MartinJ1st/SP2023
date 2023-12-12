#include <iostream>
using namespace std;

int main() {
    int vozrast;
    char pol, statusBrak;

    // Ask the user to enter their vozrast, pol (M or F), and marital status (Y or N)
    cout << "Enter your vozrast: ";
    cin >> vozrast;
    cout << "Enter your pol (M or F): ";
    cin >> pol;
    cout << "Are you married? (Y or N): ";
    cin >> statusBrak;

    if (pol == 'F' || pol == 'f') {
        cout<<"Your place of service is: Urban areas";
    } else if (pol == 'M' || pol == 'm') {
        if (vozrast >= 20 && vozrast <= 40) {
            cout<<"Your place of service is: Anywhere";
        } else if (vozrast > 40 && vozrast <= 60) {
            cout<<" Your place of service is:Urban areas";
        } else {
            cout<<"ERROR";
        }
    } else {
        cout<<"ERROR";
    }

    return 0;
}