// Exercise 2-1-4

#include <bits/stdc++.h>

using namespace std;

int main () {
    int a[] = {1, 0, 1, 0, 0};
    int b[] = {1, 0, 1, 1, 1};
    int c[] = {0, 0, 0, 0, 0, 0};

    for (int i = 4; i > -1; i--) {
        c[i + 1] = (a[i] + b[i] + c[i + 1]) % 2;
        c[i] = (a[i] + b[i]) / 2;
    }

    for (int i = 0; i < 6; i++) {
        cout << c[i];
    }

    return 0;
}
