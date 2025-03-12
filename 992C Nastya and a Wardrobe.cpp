#include <bits/stdc++.h>
using namespace std;
constexpr int mod = 1000000007;

int power(long long a, long long b) {
    long long res = 1;

    while (b) {
        if (b & 1) {
            res = res * a % mod;
        }

        a = a * a % mod;
        b >>= 1;
    }

    return res;
}

void solve() {
    long long x, k;
    cin >> x >> k;

    if (x == 0) {
        cout << 0 << endl;
    } else {
        long long p = power(2, k);
        cout << ((((((2LL * p % mod) * (x % mod) % mod) - p) % mod + 1) % mod) + mod) % mod << endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
