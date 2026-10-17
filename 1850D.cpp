#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        long long k;
        cin >> n >> k;
        vector<long long> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        int cur = 1, mx = 1;
        for(int i = 1; i < n; i++){
            if (a[i] - a[i - 1] <= k) cur++;
            else cur = 1;
            mx = max(mx, cur);
        }
        cout << n - mx << '\n';
    }
    return 0;
}