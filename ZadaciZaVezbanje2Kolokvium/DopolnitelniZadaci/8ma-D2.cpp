#include <iostream>
#include <cstring>

using namespace std;

// Function to search for a word in the matrix
bool searchWord(char matrix[50][50], int n, const char word[], int &startRow, int &startCol, int &endRow, int &endCol) {
    // Search horizontally
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= n - strlen(word); j++) {
            bool found = true;
            for (int k = 0; k < strlen(word); k++) {
                if (matrix[i][j + k] != word[k]) {
                    found = false;
                    break;
                }
            }
            if (found) {
                startRow = i;
                startCol = j;
                endRow = i;
                endCol = j + strlen(word) - 1;
                return true;
            }
        }
    }

    // Search vertically
    for (int col = 0; col < n; col++) {
        for (int row = 0; row <= n - strlen(word); row++) {
            bool found = true;
            for (int k = 0; k < strlen(word); k++) {
                if (matrix[row + k][col] != word[k]) {
                    found = false;
                    break;
                }
            }
            if (found) {
                startRow = row;
                startCol = col;
                endRow = row + strlen(word) - 1;
                endCol = col;
                return true;
            }
        }
    }

    // Search diagonally (top-left to bottom-right)
    for (int row = 0; row <= n - strlen(word); row++) {
        for (int col = 0; col <= n - strlen(word); col++) {
            bool found = true;
            for (int k = 0; k < strlen(word); k++) {
                if (matrix[row + k][col + k] != word[k]) {
                    found = false;
                    break;
                }
            }
            if (found) {
                startRow = row;
                startCol = col;
                endRow = row + strlen(word) - 1;
                endCol = col + strlen(word) - 1;
                return true;
            }
        }
    }

    // Search diagonally (top-right to bottom-left)
    for (int row = 0; row <= n - strlen(word); row++) {
        for (int col = n - 1; col >= strlen(word) - 1; col--) {
            bool found = true;
            for (int k = 0; k < strlen(word); k++) {
                if (matrix[row + k][col - k] != word[k]) {
                    found = false;
                    break;
                }
            }
            if (found) {
                startRow = row;
                startCol = col;
                endRow = row + strlen(word) - 1;
                endCol = col - strlen(word) + 1;
                return true;
            }
        }
    }

    return false;
}

int main() {
    int n;
    cin >> n;
    char a[50][50];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    char word[11];
    cin.getline(word, 11);

    int sRed, sKol, kRed, kKol;
    if (searchWord(a, n, word, sRed, sKol, kRed, kKol)) {
        cout << sRed << "." << sKol << " -> " << kRed << "." << kKol << endl;
    } else {
        cout << "Not Found" << endl;
    }

    return 0;
}
