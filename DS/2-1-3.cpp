// Exercise 2-1-3

#include <bits/stdc++.h>

using namespace std;

int linearSearch(int arr[], int arrLength, int v) {
    for (int i = 0; i < arrLength; i++) {
        if (arr[i] == v) return i;
    }

    return NULL;
}

int main () {
    int arr[] = {43, 12, 22, 59, 60, 11};
    int v = 60;
    int arrLength = sizeof(arr) / sizeof(arr[0]);

    cout << linearSearch(arr, arrLength, v) << endl;

    return 0;
}
