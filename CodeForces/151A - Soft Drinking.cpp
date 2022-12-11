#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);

    int toast;
    int maxDrink = (k * l) / (nl * n);
    int maxSlice = (c * d) / n;
    int maxSalt = p / (np * n);
    toast = min(maxDrink, maxSlice);
    toast = min(toast, maxSalt);

    printf("%d\n", toast);
}
