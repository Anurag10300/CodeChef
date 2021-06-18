#include<iostream>
#include<bits/stdc++.h>


using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    uint32_t t;

    cin>>t;

    while(t--){
        uint32_t n;
        cin>>n;
        uint32_t i,count=0;
        for(i=5; n/i>=1 ;  i*=5){
            count+=n/i;
        }

        cout<<count<<endl;
    }
    
    
}