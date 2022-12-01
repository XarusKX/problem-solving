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

    int score;
    t--; cin >> score;

    int low = score, high = score;
    int tot = 0;
    while (t--) {
        cin >> score;
        if (score > high) {
            high = score;
            tot++;
        } else if (score < low){
            low = score;
            tot ++;
        }
    }

    cout << tot << endl;

    return 0;
}
