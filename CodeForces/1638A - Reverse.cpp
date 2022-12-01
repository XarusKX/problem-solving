#include <bits/stdc++.h>
#include <stdlib.h>

using namespace std;

using vi = vector<int>;

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

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int l = 0, r = 0, longest = 0;
        int tl = 0, token = 1;
        for (int i = 1; i < n; i++) {
            if (arr[i] < arr[i - 1]) {
                if (longest < token) {
                    longest = token;
                    l = tl;
                    r = i;
                    token = 1;
                } else {
                    tl = i;
                }
            } else {
                tl++;
                token++;
            }
        }

        if (longest < token) {
            longest = token;
            l = tl;
            r = n;
        }

        cout << l << " " << r << " " << token << endl;
    }

    return 0;
}
