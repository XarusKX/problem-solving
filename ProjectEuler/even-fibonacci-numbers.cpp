#include <bits/stdc++.h>

using namespace std;

int a, b, c, d;

// Reference: https://www.geeksforgeeks.org/modulo-1097-1000000007/
#define modulo 1000000007

void fibonacci_fast_doubling(int k, int result[]) {
    if (k == 0) {
        result[0] = 0;
        result[1] = 1;
        return;
    }
    fibonacci_fast_doubling((k / 2), result);

    // F(k)
    a = result[0];
    // F(k+1)
    b = result[1];
    c = 2 * b - a;
    if (c < 0) c += modulo;

    // F(2k) = F(k)[2F(k+1) – F(k)]
    c = (a * c) % modulo;
    // F(2k + 1) = F(k)^2 + F(k+1)^2
    d = (a * a + b * b) % modulo;

    if (k % 2 == 0) {
        result[0] = c;
        result[1] = d;
    } else {
        result[0] = d;
        result[1] = c + d;
    }
}

int main() {
    int n = 2;
    int result[2] = { 0 };
    int total = 0;

    while(result[0] < 4000000) {
        fibonacci_fast_doubling(n++, result);

        if (result[0] % 2 == 0) total += result[0];
    }

    printf("%d\n", total);
}
