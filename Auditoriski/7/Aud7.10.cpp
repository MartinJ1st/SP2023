//Да се напише програма која за квадратна матрица внесена од тастатура ќе испечати на екран дали таа е симетрична во однос на главната дијагонала.

#include<iostream>
using namespace std;

int main() {
    int a[100][100], n, simetrichna = 1;

    cout << "Vnesete dimenzija na kvadratna matrica:" << endl;
    cin >> n;

    cout << "Vnesete gi elementite:" << endl;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                simetrichna = 0;
                break;
            }
        }
        if (!simetrichna){
            break;
        }
    }

    if (simetrichna){
        cout << "Matricata e SIMETRICHNA vo odnos na glavnata dijagonala" << endl;
    }
    else{
        cout << "Matricata ne e SIMETRICHNA vo odnos na glavnata dijagonala" << endl;
    }
    return 0;
}