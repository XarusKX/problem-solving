#include <bits/stdc++.h>
#include <stdlib.h>

using namespace std;

using vi = vector<int>;

int main () {

    int n;
    cin >> n;

    int x;
    int shortest = 101;
    int tallest = 0;
    int shortestPosition = -1;
    int tallestPosition = -1;
    for (int i = 1; i <= n; i++) {
        cin >> x;

        if (x > tallest) {
            tallest = x;
            tallestPosition = i;
        }

        if (x <= shortest) {
            shortest = x;
            shortestPosition = i;
        }
    }

    if (tallestPosition > shortestPosition) shortestPosition += 1;
    shortestPosition = n - shortestPosition;

    cout << tallestPosition + shortestPosition - 1 << endl;
}
