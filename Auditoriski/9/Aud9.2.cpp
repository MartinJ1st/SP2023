//Да се напише рекурзивна функција count_down(int n) која за даден цел
// број n ќе овозможи печатење на броевите од n до 0.

#include <iostream>
using namespace std;

void count_down(int n){
    if(n == 0){
        cout<<0<<" ";
        return;
    }
    cout<<n<<" ";
    count_down(n-1);
}

//Да се напише рекурзивна функција count_up(int n) која за даден цел број n ќе овозможи печатење на
// броевите од 0 до n. (Искористете го кодот на функцијата count_down(int n) и решете ја задачата со
// промена на редоследот на командите).

void count_up(int n){
    if(n == 0){
        cout<<0<<" ";
        return;
    }
    count_up(n-1);
    cout<<n<<" ";
}