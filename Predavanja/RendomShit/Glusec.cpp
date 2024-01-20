//  Како контекст, користам алгоритам за сортирање
// (подредување) со селекција (одбирање)

#include <iostream>
#include <algorithm>

using namespace std;

void Sort(int a[], int b[], int n) {
    for (int i=0; i<n; i++)
    {
        int min = i;
        for (int j=i+1; j<n; j++)
            if (a[j] < a[min])
                min = j;
        if (min != i)
        {
            swap(a[i], a[min]);
        }
    }


    for (int i=0; i<n; i++)
    {
        int min = i;
        for (int j=i+1; j<n; j++)
            if (b[j] < b[min])
                min = j;
        if (min != i)
        {
            swap(b[i], b[min]);
        }
    }
}

int VremeZaZadaca(int a[], int b[], int n) {
    int Vreme = 0;
    for (int i = 0; i < n; i++) {
        int Abs = abs(a[i] - b[i]);
        if (Abs > Vreme) {
            Vreme = Abs;
        }
    }
    return Vreme;
}

int main() {
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int j = 0; j < n; j++) {
        cin >> b[j];
    }

    Sort(a, b, n);

    cout << VremeZaZadaca(a, b, n);

    return 0;
}