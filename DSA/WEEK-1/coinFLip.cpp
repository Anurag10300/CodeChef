#include<iostream>
#include<bits/stdc++.h>


using namespace std;

int main(){
    int t,g,i,n,q,res;
    cin>>t;
    while(t--){
        cin>>g;
        while(g--){
            cin>>i>>n>>q;
            if(i==1){
                if(q==1){
                    res= (n/2);
                }else{
                    res=n-(n/2);
                }
            }else{
                if(q==2){
                    res= (n/2);
                }else{
                    res=n-(n/2);
                }
            }
            cout<<res<<endl;
        }
    }
    return 0;
}