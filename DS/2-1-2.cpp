// Exercise 2-1-2

#include <bits/stdc++.h>

using namespace std;

int main () {
    int arr[] = {43, 12, 22, 59, 60, 11};
    int arrLength = sizeof(arr) / sizeof(arr[0]);

    for (int i = 1; i < arrLength; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j > -1 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    for (int i = 0; i < arrLength; i++) cout << arr[i] << " ";

    return 0;
}
