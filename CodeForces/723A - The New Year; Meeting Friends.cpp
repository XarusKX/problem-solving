#include <bits/stdc++.h>

using namespace std;

int main() {
    int x1, x2, x3;
    scanf("%d %d %d", &x1, &x2, &x3);

    int shortest = min(x1, x2);
    shortest = min(shortest, x3);
    int longest = max(x1, x2);
    longest = max(longest, x3);

    printf("%d\n", longest - shortest);
}
