//Од стандарден влез се чита еден природен број n. Меѓу природните броеви помали од n, да се најде оној чиј што збир на
// делителите е најголем. Во пресметувањето на збирот на делителите на даден број, да не се зема предвид самиот број.
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int zbirDeliteli = 0;
    int Najgolem = 0;

    for (int i = 1; i < n; i++) {
        int sum = 0;
        for (int j = 1; j <= i / 2; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }
        if (sum > zbirDeliteli) {
            zbirDeliteli = sum;
            Najgolem = i;
        }
    }
    cout << Najgolem;
    return 0;
}
