#include <bits/stdc++.h>
#include <stdlib.h>

using namespace std;

void fastscan(int &number) {
    //variable to indicate sign of input number
    bool negative = false;
    register int c;

    number = 0;

    // extract current character from buffer
    c = getchar();
    if (c=='-')
    {
        // number is negative
        negative = true;

        // extract the next character from the buffer
        c = getchar();
    }

    // Keep on extracting characters if they are integers
    // i.e ASCII Value lies from '0'(48) to '9' (57)
    for (; (c>47 && c<58); c=getchar())
        number = number *10 + c - 48;

    // if scanned input has a negative sign, negate the
    // value of the input number
    if (negative)
        number *= -1;
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    fastscan(t);

    while (t--) {
        fastscan(n);
        vector<vector<bool>> mark(n+1 , vector<bool>(n+1));
        vector<int> l(n), r(n);

        for (int i = 0; i < n; i++) {
            fastscan(l[i]);
            fastscan(r[i]);
            mark[l[i]][r[i]] = true;
        }
        for (int i = 0; i < n; i++) {
            for (int d = l[i]; d <= r[i]; d++) {
                if ((d == l[i] || mark[l[i]][d-1]) && (d == r[i] || mark[d+1][r[i]])) {
                    printf("%d %d %d\n", l[i], r[i], d);
                    break;
                }
            }
        }
    }

    return 0;
}
