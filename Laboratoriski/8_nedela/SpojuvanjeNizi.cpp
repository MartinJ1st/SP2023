//#include <iostream>
//
//using namespace std;
//
//
//int main() {
//
//    int n, m, a[100], b[100], c[200];
//    cin >> m;
//    for (int i = 0; i < m; i++) {
//        cin >> a[i];
//    }
//
//    cin >> n;
//    for (int i = 0; i < n; i++) {
//        cin >> b[i];
//    }
//
//    int dolzina = n + m;
//    int counter1 = 0;
//    int counter2 = 0;
//
//    for (int k = 0; k < dolzina; k++) {
//        if (a[counter1] <= b[counter2]) {
//            c[k] = a[counter1];
//            counter1++;
//        }
//        else if (a[counter1] > b[counter2]) {
//            c[k] = b[counter2];
//            counter2++;
//        }
//
//        if (counter1 >= m) {
//            for (int i = k; i < dolzina; ++i) {
//                c[k] = b[counter2];
//                counter2++;
//            }
//            break;
//        }
//        else if (counter2 >= n) {
//            for (int i = k; i < dolzina; ++i) {
//                c[k] = a[counter1];
//                counter1++;
//            }
//            break;
//        }
//    }
//
//    for (int i = 0; i < dolzina; i++) {
//        cout << c[i] << " ";
//    }
//
//    return 0;
//}

#include <iostream>
using namespace std;
int main() {
    int n1, n2;
    cin>>n1;
    int array1[n1];
    for(int i=0; i<n1; i++) cin>>array1[i];
    cin>>n2;
    int array2[n2];
    for(int i=0; i<n2; i++) cin>>array2[i];

    int i=0, j=0;
    while(i<n1 && j<n2){
        if(array1[i]<array2[j]) cout<<array1[i++]<<" ";
        else cout<<array2[j++]<<" ";
    }
    while(i<n1) cout<<array1[i++];
    while(j<n2) cout<<array2[j++];

    return 0;
}