#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    scanf("%d", &t);

    string str;
    for (int i = 0; i < t; i++) {
        cin >> str;

        int a = str[0] - '0';
        int b = str[2] - '0';

        printf("%d\n", a + b);
    }
}
