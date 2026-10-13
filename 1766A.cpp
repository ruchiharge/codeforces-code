#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        string n;
        cin>>n;
        int digits=n.size();
        int first=n[0]-'0';
        int ans=(digits-1)*9+first;
        cout<<ans<<endl;
    }
    return 0;
}