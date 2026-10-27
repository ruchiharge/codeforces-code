#include <iostream>
using namespace std;
int main(){
    int n, k;
    cin>> n >> k;
    int a[50];
    for(int i=0;i<n;i++) cin>> a[i];
    int cnt=0, p=a[k-1];
    for(int i=0;i<n;i++){
        if(a[i] >=p&&a[i]>0){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}