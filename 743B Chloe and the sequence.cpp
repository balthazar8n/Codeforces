#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve() {
    int n, k;
    cin >> n >> k;

    while (true) {
        int a = pow(2LL, n - 1);
        if (k == a) {
            cout << n << endl;
            return;
        } else if (k < a) {
            n--;
        } else {
            k -= a;
            n--;
        }
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
