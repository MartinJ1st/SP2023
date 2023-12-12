//KMP алгоритмот, исто така познат како Knuth-Moris-Pratt
// алгоритам, е ефикасен алгоритам за совпаѓање низа кој претходно
// пресметува табела со парцијални совпаѓања за да ја подобрување на ефикасноста.
// Оваа табела, позната како табела за делумно совпаѓање (PMT), му помага на алгоритмот
// брзо да ги прескокне знаците што не се совпаѓаат во текстуалната низа. Алгоритмот KMP има
// временска сложеност од O(n + m), каде што n е должината на текстуалната низа и m е должината
// на шаблонот кој се пребарува.
//

#include <iostream>

using namespace std;

int compute_partial_match_table(char pattern[], int m) {
    int table[m + 1];
    table[0] = 0;
    int i = 0;
    int j = 1;

    while (j < m) {
        if (pattern[i] == pattern[j]) {
            table[j] = i + 1;
            i++;
            j++;
        } else {
            if (i == 0) {
                table[j] = 0;
                j++;
            } else {
                i = table[i - 1];
            }
        }
    }

    return 0;
}

void kmp_string_matching(char text[], char pattern[], int n, int m) {
    int table[m + 1];
    compute_partial_match_table(pattern, m);

    int i = 0;
    int j = 0;
    int occurrences[n];
    int occurrences_count = 0;

    while (i < n) {
        if (text[i] == pattern[j]) {
            i++;
            j++;

            if (j == m) {
                occurrences[occurrences_count] = i - m;
                occurrences_count++;
                j = table[j - 1];
            }
        } else {
            if (j == 0) {
                i++;
            } else {
                j = table[j - 1];
            }
        }
    }

    cout << "Occurrences: ";
    for (int k = 0; k < occurrences_count; k++) {
        cout << occurrences[k] << " ";
    }
    cout << endl;
}

int main() {
    char text[] = "AABAACAADAABAABA";
    char pattern[] = "AABA";
    int n = strlen(text);
    int m = strlen(pattern);

    kmp_string_matching(text, pattern, n, m);

    return 0;
}