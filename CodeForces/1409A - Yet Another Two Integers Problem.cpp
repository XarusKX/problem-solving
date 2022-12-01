#include <bits/stdc++.h>

using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    int a, b;
    while (t--) {
        cin >> a >> b;

        int maxi = max(a, b);
        int mini = min(a, b);

        int div = maxi / 10 - mini / 10;
        int mod = 0;
        if (mini % 10 < maxi % 10) mod = 1;

        cout << div + mod << endl;
    }

    return 0;
}
