#include <bits/stdc++.h>

using namespace std;

int main() {
    int k, r;
    scanf("%d %d", &k, &r);

    int shovel = 0;

    while(++shovel) {
        int totalPrice = k * shovel;
        if (totalPrice % 10 == 0 || (totalPrice % 10 != 0 && (totalPrice - r) % 10 == 0)) break;
    }
    printf("%d\n", shovel);
}
