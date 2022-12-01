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

    char str[101] = {0};
    vi n;

    scanf("%s", str);

    for (int i = 0; i < strlen(str); i+=2) {
        int s = (int) str[i];
        n.push_back(s - 48);
    }

    sort(n.begin(), n.end());
    for (int i = 0, j = 0; i < strlen(str); i++) {
        if (i % 2 == 0) cout << n[j++];
        else cout << '+';
    }

    cout<<endl;

    return 0;
}
