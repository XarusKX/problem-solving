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

    int year;

    cin >> year;


    while (true) {
        year++;
        int a = year % 10;
        int b = year / 1000;
        int c = year / 100 % 10;
        int d = year / 10 % 10;

        if (a != b && a != c && a != d && b != c && b != d && c != d) break;
    }

    cout << year << endl;

    return 0;
}
