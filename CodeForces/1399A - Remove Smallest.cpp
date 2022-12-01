#include <bits/stdc++.h>

using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int cs;
        cin >> cs;

        vector<int> arr;

        int n;
        for (int i = 0; i < cs; i++) {
            cin >> n;
            arr.push_back(n);
        }

        sort(arr.begin(), arr.end());

        bool one = true;
        for (int i = 1; i < cs; i++) {
            if (arr[i] - arr[i-1] > 1) {
                one = false;
                break;
            }
        }

        if (one) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
