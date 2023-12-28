#include <iostream>
#include <cstring>

using namespace std;
int brojSvrznici(const char sentence[], int length) {
    int brojSvrznici = 0, start = 0, end;
    while (start < length) {
        while (!(isalpha(sentence[start]))) {
            ++start;
        }
        end = start;

        while (isalpha(sentence[end])) {
            ++end;
        }

        if (start < end) {
            if (end-start<3)
                ++brojSvrznici;
        }

        start = end + 1;
    }

    return brojSvrznici;
}

int main() {
    int max=0;
    char sentence[100], maxNiza[100];
    while (cin.getline(sentence,100)){
        int brSvrznici= brojSvrznici(sentence, 100);
        if(brSvrznici>max){
            max=brSvrznici;
            strcpy(maxNiza,sentence);
        }
    }
    cout<<max<<": "<<maxNiza;


    return 0;
}
