#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<long long> a(n + 1);
        vector<long long> pref(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            pref[i] = pref[i - 1] + a[i];
        }
        long long total = pref[n];
        while (q--) {
            long long l, r, k;
            cin >> l >> r >> k;
            long long oldSum = pref[r] - pref[l - 1];
            long long newSum =total - oldSum + k * (r - l + 1);
            if (newSum % 2) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}