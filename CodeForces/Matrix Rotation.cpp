#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        int a[4];
        bool beautiful = false;
        for (int i = 0; i < 4; i++) {
            scanf("%d", &a[i]);
        }

        for (int i = 0; i < 4; i++) {
            int tmp = a[0];
            a[0] = a[2];
            a[2] = a[3];
            a[3] = a[1];
            a[1] = tmp;

            if (a[0] < a[1] && a[1] < a[3] && a[2] > a[0] && a[2] < a[3]) {
                beautiful = true;
                break;
            }
        }

        if (beautiful) printf("YES\n");
        else printf("NO\n");
    }
}
