/*
 * Да се напише програма што од непознат број на цели броеви кои се
 * внесуваат од тастатура ќе ги определи позициите (редните броеви на
 * внесување) на двата последователни броја што ја имаат најголемата
 * сума. Програмата завршува ако едно по друго (последователно) се
 * внесат два негативни цели броја.
 */

#include <iostream>
using namespace std;

int main() {
    int pol_position, position, max_sum, sum, previous, next;
    cin >> previous >> next;
    pol_position = position = 2;
    max_sum = sum = previous + next;
    while (1) {
        if (previous < 0 && next < 0) {
            break;
        }
        sum = previous + next;
        if (sum > max_sum) {
            max_sum = sum;
            pol_position = position;
        }
        previous = next;
        cin >> next;
        position++;
    }
    if (position > 2)
        cout << "Broevite se na pozicii " << pol_position - 1 << " i " << pol_position << " i nivnata suma e " << max_sum;
    return 0;
}