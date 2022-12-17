#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    sort(a, a+n);
    int maximum = a[n - 1];
    int burles = 0;
    while (n--) {
        burles += (maximum - a[n]);
    }


    printf("%d\n", burles);
}
