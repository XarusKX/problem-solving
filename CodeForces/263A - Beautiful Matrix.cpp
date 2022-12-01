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

    int a, res;
    int i = 0;
    while (i++ != 25) {
        cin >> a;

        if (a == 1) {
            int d = ceil((float) i / 5);
            int e = i % 5;
            if (e == 0) e = 5;
            res = abs(d-3) + abs(e-3);
        }
    }

    cout << res << endl;

    return 0;
}
