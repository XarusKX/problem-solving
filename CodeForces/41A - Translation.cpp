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

    string s, t;

    cin >> s;
    cin >> t;

    bool st = true;
    if (s.length() != t.length()) st = false;
    else {
        for(int i = 0, j = s.length() - 1; i < s.length(); i++, j--) {
            if (!st) break;
            if (s[i] != t[j]) st = false;
        }
    }

    if (st) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
