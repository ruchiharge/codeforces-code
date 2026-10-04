#include <iostream>
using namespace std;
int main(){
    int i;
    cin>>i;
    while(i--){
        long long x,y;
        cin>>x>>y;
        if(y/x>2) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}