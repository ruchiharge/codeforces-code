#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 100000;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        ans = min(ans, abs(x));
    }
    cout << ans;
    return 0;
}