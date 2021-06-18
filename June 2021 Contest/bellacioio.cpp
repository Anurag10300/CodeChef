#include<bits/stdc++.h>
using namespace std;
int main(){


ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);


int t;
cin>>t;
while(t--){
    long long D,d,p,q,res=0,x,y,last;
    cin>>D>>d>>p>>q;

    x = D/d;
    y = D%d;

    res = d*((x*p)+(q*x*(x-1))/2);

    last = p+(x*q);
    res+=y*last;
    
    cout<<res<<endl;
}
return 0;
}