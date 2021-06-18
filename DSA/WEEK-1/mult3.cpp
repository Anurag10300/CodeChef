#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int test;
    vector<string> res;
    cin>>test;

    while(test--){
        ll k,tot,c,cycles;
        int d0,d1,s,left_over;

        cin>>k>>d0>>d1;
        s=d0+d1;
        c = (2*s)%10 + (4*s)%10 + (8*s)%10 + (6*s)%10;

        cycles = (k-3)/4;
        left_over = (k-3)-(cycles*4);

        if(k==2){
            tot = s;
        } else{
            tot = s+(s%10) + ((k-3)/4)*c;
            int p=2;
            for(int i=1;i<=left_over;i++){
                tot+=(p*s)%10;
                p=(p*2)%10;
            }
        } 






        if(tot%3==0){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
            }

    
    }
    
    return 0;
}