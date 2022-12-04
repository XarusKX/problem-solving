#include <bits/stdc++.h>

using namespace std;

int main () {
    int t;
    scanf("%d", &t);

    int n[t];
    for (int i = 0; i < t; i++) {
        scanf("%d", &n[i]);
    }


    for (int i = 0; i < t; i++) {
        vector<int> summands;
        int limit = 10000;
        while (limit > 0) {
            float calc = (float) n[i] / limit;
            if (calc >= 1) {
                int summand = floor(calc) * limit;
                n[i] -= summand;
                summands.push_back(summand);
            }
            limit /= 10;
        }

        printf("%d\n", summands.size());
        for (int j = 0; j < summands.size(); j++) {
            printf("%d ", summands[j]);
        }
        cout << endl;
    }
}
