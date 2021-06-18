#include<bits/stdc++.h>
using namespace std;






int main(){
int t;
cin>>t;
while(t--){
    long long n,s,res = 0;
    long long mn = 2e9;

    cin>>n;

    for(long long i=0; i<n;i++){
        cin>>s;
        mn = min(mn,s);
        res+=mn;
    }
    

    cout<<res<<endl;
     

}



}