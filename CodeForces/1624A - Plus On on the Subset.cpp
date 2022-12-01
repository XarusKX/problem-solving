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

    int t, n;

    cin >> t;

    while(t--) {
        cin >> n;

        long long a, mini = 10000000000, maxi = 0;
        while(n--) {
            cin >> a;
            maxi = max(a, maxi);
            mini = min(a, mini);
        }
        cout << maxi - mini << endl;
    }

    return 0;
}
