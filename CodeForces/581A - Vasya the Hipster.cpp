#include <bits/stdc++.h>

using namespace std;

int main () {
    int a, b, c, d = 0;
    scanf("%d %d", &a, &b);

    c = min(a, b);
    d = (max(a, b) - min(a, b)) / 2;
    printf("%d %d\n", c, d);
}
