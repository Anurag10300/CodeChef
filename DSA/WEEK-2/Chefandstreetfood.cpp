#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    
    int test;
    cin>>test;
    while(test--){
        int best=0,profit=0;
        int n;
        cin>>n;
        while(n--){
            int s,v,p;
            cin>>s>>p>>v;
            
                int profit = (p/(s+1))*v;
            
            best = max(best,profit);
            
        }
        cout<<best<<endl;
    }
    return 0;
}