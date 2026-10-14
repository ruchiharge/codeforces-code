#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int mini=*min_element(a.begin(),a.end());
        vector<int> b,c;
        for(int x:a){
            if(x==mini) b.push_back(x);
            else c.push_back(x);
        }
        if(c.size()==0) cout<<-1<<endl;
        else{
            cout<<b.size()<<" "<<c.size()<<endl;
            for(int x:b){
                cout<<x<<" ";
            }
            cout<<endl;
            for(int x:c){
                cout<<x<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}