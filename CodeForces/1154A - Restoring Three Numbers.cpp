#include <bits/stdc++.h>

using namespace std;

int main() {
    int num[4];

    int i = 4;
    while (i--) {
        scanf("%d", &num[i]);
    }

    sort(num, num+4);
    for (i = 0; i < 3; i++) {
        printf("%d ", num[3] - num[i]);
    }
    cout << endl;
}
