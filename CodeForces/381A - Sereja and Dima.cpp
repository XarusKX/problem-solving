#include <bits/stdc++.h>

using namespace std;

int get_highest(int cards[], int *l, int *r) {
    if (cards[*l] > cards[*r]) {
        *l += 1;
        return cards[*l - 1];
    }
    else {
        *r -= 1;
        return cards[*r + 1];
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int s[n];
    int sereja = 0, dima = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &s[i]);
    }

    int leftmost = 0, rightmost = n - 1;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            sereja += get_highest(s, &leftmost, &rightmost);
        }
        else dima += get_highest(s, &leftmost, &rightmost);
    }

    printf("%d %d\n", sereja, dima);
}
