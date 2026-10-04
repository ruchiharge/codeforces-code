#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        int i=0,ans=0;
        while(i<n){
            int vertical=(a[i]!=b[i]);
            if(i+1<n){
                int horizontal=(a[i]!=a[i+1])+(b[i]!=b[i+1]);
                if(horizontal<vertical+(i+1<n?(a[i+1]!=b[i+1]):0)){
                    ans+=horizontal;
                    i+=2;
                    continue;
                }
            }
            ans+=vertical;
            i++;
        }
        cout<<ans<<"\n";
    }
    return 0;
}