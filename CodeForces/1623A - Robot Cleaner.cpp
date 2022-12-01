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

    int t;

    fastscan(t);

    int n, m, rb, cb, rd, cd;
    int dr, dc, total;
    while(t--) {
        dr = 1, dc = 1, total = 0;
        fastscan(n);
        fastscan(m);
        fastscan(rb);
        fastscan(cb);
        fastscan(rd);
        fastscan(cd);

        while(true) {
            if (rb == n) dr *= -1;
            if (cb == m) dc *= -1;
            if (rb != rd && cb != cd) {
                rb += dr;
                cb += dc;
                // printf("(%d,%d)\n", rb, cb);
                total++;
            } else {
                printf("%d\n", total);
                break;
            }
        }
    }


    return 0;
}
