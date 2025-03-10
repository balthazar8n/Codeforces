#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long int n;
    cin >> n;

    cout << n * (n + 1) / 2 * (n + 2) / 3 * (n + 3) / 4 * (n + 4) / 5 * (n + 2) * (n + 1) / 6 * n << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}