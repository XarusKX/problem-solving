#include <bits/stdc++.h>

using namespace std;

int main() {
    int sum;
    scanf("%d", &sum);

    // 2, 3, 5, 7, 11
    // 4, 6, 8, 9, 10
    int com1, com2;
    if (sum % 2 == 0) {
        com1 = 4;
        com2 = sum - 4;
    } else {
        com1 = 9;
        com2 = sum - 9;
    }

    printf("%d %d\n", com1, com2);
}
