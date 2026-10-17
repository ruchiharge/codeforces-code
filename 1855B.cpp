#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long lcm=1;
        int ans=0;
        for(long long i=1; ;i++){
            lcm = lcm/gcd(lcm,i)*i;
            if(lcm>n) break;
            if(n%lcm==0) ans++;
            else break;
        }
        cout<<ans<<'\n';
    }
    return 0;
}