#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int x,y,a,b;
        cin>>x>>y>>a>>b;

        cout<<(a/x)+(b/y);
    }
    return 0;
}