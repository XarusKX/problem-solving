#include <bits/stdc++.h>
#include <stdlib.h>

using namespace std;

using vi = vector<int>;

int main () {

    int n;
    cin >> n;
    bool pass[n];
    for (int i = 0; i < n; i++) pass[i] = false;

    int tmp;
    int x;
    int j = 2;
    while (j--) {
        cin >> x;
        for (int i = 0; i < x; i++) {
            cin >> tmp;
            pass[tmp - 1] = true;
        }
    }

    bool success = true;
    for (int i = 0; i < n; i++) {
        if (pass[i] == false) {
            success = false;
            break;
        }
    }

    if (!success) cout << "Oh, my keyboard!" << endl;
    else cout << "I become the guy." << endl;

    return 0;
}
