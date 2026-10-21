#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int maxi=0,cnt=0;
        for(int i=0;i<n;i++){
            if(s[i]=='.'){
                cnt++;
                maxi=max(maxi,cnt);
            }
            else cnt=0;
            
        }
        if(maxi>=3){
            cout<<2<<endl;
        }
        else{
            int ans=0;
            for(int i=0;i<n;i++){
                if(s[i]=='.') ans++;
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}