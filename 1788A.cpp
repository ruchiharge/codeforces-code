#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        int total=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==2) total++;
        }
        if(total==0){
            cout<<1<<endl;
            continue;
        }
        if(total%2){
            cout<<-1<<endl;
            continue;
        }
        int need=total/2, cnt=0;
        for(int i=0;i<n;i++){
            if(a[i]==2) cnt++;
            if(cnt==need){
                cout<<i+1<<endl;
                break;
            }
        }
    }
    return 0;
}