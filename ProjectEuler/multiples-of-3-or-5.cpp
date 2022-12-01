#include <bits/stdc++.h>

using namespace std;

int main() {
    unsigned long long sum = 0;
    for (int i = 0;i < 1000; i++) {
        sum += (i % 3 == 0 || i % 5 == 0) ? i : 0;
    }
    printf("%d", sum);
}
