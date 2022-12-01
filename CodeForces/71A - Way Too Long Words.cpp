#include <bits/stdc++.h>

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

    int n;
    char c[101];

    fastscan(n);

    for (int i = 0; i < n; i++) {
        scanf("%s", c);

        int length = strlen(c);
        if (length > 10) {
            printf("%c%d%c\n", c[0], length - 2, c[length - 1]);
        } else {
            printf("%s\n", c);
        }
    }


    return 0;
}
