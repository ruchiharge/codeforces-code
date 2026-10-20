#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        int b[200000];
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int s=1;
        for(int i=1;i<n;i++){
            if(b[i]<b[i-1]){
                s++;
            }
            s++;
        }
        cout<<s<<endl;
        cout<<b[0]<<" ";
        for(int i=1;i<n;i++){
            if(b[i]<b[i-1]){
                cout<<1<<" ";
            }
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}