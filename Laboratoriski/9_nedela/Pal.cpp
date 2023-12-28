#include <iostream>
#include <cstring>

using namespace std;

bool isPalindrome(const char recenica[], int start, int end) {
    int j = end - 1;
    for (int i = 0; i < end; ++i) {
        if (tolower(recenica[i]) != tolower(recenica[j])) {
            return false;
        }
        j--;
    }
    return true;
}

int brojSvrznici(const char a[], int n) {
    int brPalindom = 0, s = 0, k = 0;
    while (s < n) {
        while (!(isalpha(a[s]))) {
            s++;
        }
        k = s;

        while (isalpha(a[k])) {
            k++;
        }

        if (s < k) {
            if (isPalindrome(a, s, k)) {
                ++brPalindom;
            }
        }

        s = k + 1;
    }

    return brPalindom;
}

int main() {
    int n;
    cin >> n;
    cin.ignore();

    char a[100];

    for (int i = 0; i < n; ++i) {
        cin.getline(a, 100);
        int result = brojSvrznici(a, strlen(a));

        cout << a << ": " << result << endl;
    }

    return 0;
}
