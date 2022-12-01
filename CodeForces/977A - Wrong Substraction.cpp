#include <bits/stdc++.h>
#include <stdlib.h>

using namespace std;

using vi = vector<int>;
using ull = unsigned long long;

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

    string str;
    int k;

    cin >> str >> k;

    int pos = str.length() - 1;
    while (k--) {
        if (str[pos] == '0') str[pos--] = 0;
        else str[pos] -= 1;
    }

    for (int i = 0; i <= pos; i++) cout << str[i];
    cout<<endl;

    return 0;
}



