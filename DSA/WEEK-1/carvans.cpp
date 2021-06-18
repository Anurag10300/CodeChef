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

        uint32_t i,speed[n],count=0;
        for(i=0;i<n;i++){
            cin>>speed[i];
        }
        uint32_t temp = speed[0];

        for(i=0;i<n;i++){
            if(speed[i]<=temp){
                count++;
                temp=speed[i];
            }
        }

        cout<<count<<endl;

    }
}