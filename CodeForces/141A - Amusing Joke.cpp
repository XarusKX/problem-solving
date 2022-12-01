
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

    string str1, str2, str3;
    cin >> str1 >> str2 >> str3;

    bool isPerm = true;

    if (str1.length() + str2.length() != str3.length()) isPerm = false;
    else {
        str1 += str2;
        sort(str1.begin(), str1.end());
        sort(str3.begin(), str3.end());

        for (int i = 0; i < str3.length(); i++) {
            if (str1[i] != str3[i]) {
                isPerm = false;
                break;
            }
        }
    }

    if (isPerm) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
