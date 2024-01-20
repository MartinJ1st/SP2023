#include <iostream>

using namespace std;

int main() {
    int n, R, G, B;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> R >> G >> B;
        if (!(R >= 0 && R <= 255) && (G >= 0 && G <= 255) && (B >= 0 && B <= 255)) { continue; }
        else {
            int max = R;
            if (G >= max) { max = G; }
            if (B >= max) { max = B; }

            if (R == G && G == B) { cout << R << " " << G << " " << B<<endl; }
            else {
                if (R != max) { R = 0; }
                if (G != max) { G = 0; }
                if (B != max) { B = 0; }
                cout << R << " " << G << " " << B<<endl;
            }
        }
    }
    return 0;
}