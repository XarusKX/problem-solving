#include <bits/stdc++.h>

using namespace std;

bool is_prime(long long n) {
    for (long long i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }

    return true;
}

long long slow_largest_prime_factor(long long n) {
    for (long long i = n / 2; i >= 2; i--) {
        cout << n << " % " << i << endl;
        if (n % i == 0) {
            if (is_prime(i)) return i;
        }
    }

    return n;
}

long long fast_largest_prime_factor(long long n) {
    long long largestPrime = - 1;

    if (n % 2 == 0) largestPrime = 2;
    while (n % 2 == 0) n /= 2;

    if (n % 3 == 0) largestPrime = 3;
    while (n % 3 == 0) n /= 3;

    for (long long i = 5; i < sqrt(n); i += 6) {
        if (n % i == 0) largestPrime = i;
        while (n % i == 0) n /= i;

        if (n % (i + 2) == 0) largestPrime = i;
        while (n % (i + 2) == 0) n /= (i + 2);
    }

    if (n > 4) largestPrime = n;

    return largestPrime;
}

int main() {
    long long num = 600851475143;

    long long primeFactor = fast_largest_prime_factor(num);

    printf("%lld\n", primeFactor);
}
