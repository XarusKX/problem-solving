#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    scanf("%d", &t);

    string str;
    while(t--) {
        cin >> str;

        if (str.length() == 2) {
            cout << str;
        } else {
            cout << str[0];
            for (int i = 1; i < str.length() - 2; i += 2) {
                cout << str[i];
            }
            cout << str[str.length() - 1];
        }


        cout << endl;
    }
}
