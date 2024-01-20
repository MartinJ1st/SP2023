#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char niza[100];

    cin.getline(niza, 100);

    int IndexPrv = -1;
    int IndexVtor = -1;

    for (int i = 0; i < strlen(niza); ++i) {
        if (isdigit(niza[i])) {
            if (IndexPrv == -1) {
                IndexPrv = i;
            } else {
                IndexVtor = i;
                break;
            }
        }
    }

    if (IndexPrv == -1)
        cout << "No digits" << endl;
    else if (IndexVtor == -1)
        for (int i = IndexPrv; i < strlen(niza); ++i)
            cout << niza[i];
    else
        for (int i = IndexPrv; i <= IndexVtor; ++i)
            cout << niza[i];
    return 0;
}
