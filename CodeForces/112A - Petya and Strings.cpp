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

    string a, b;
    int va, vb;

    cin >> a >> b;

    for (int i = 0; i < a.length(); i++) {
        va = (int) tolower(a[i]), vb = (int) tolower(b[i]);

        if (va < vb) {
            cout << "-1" << endl;
            return 0;
        } else if (vb < va) {
            cout << "1" << endl;
            return 0;
        }
    }
    cout << 0 << endl;

    return 0;
}
