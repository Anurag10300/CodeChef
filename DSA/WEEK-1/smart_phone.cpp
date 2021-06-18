#include<iostream>
#include<algorithm>

using namespace std;

int main(){

    long long t;
    long long min_price;

    cin>>t;

    long long pc[t];

    for(int i=0;i<t;i++){
        cin>>min_price;
        pc[i]=min_price;
    }

    sort(pc,pc+t);
    long long revenue=0;

    for(int i=0;i<t;i++){
        long long max=(pc[i]*(t-i));
        if(revenue<max){
            revenue=max;
        }
    }
    cout<<revenue<<endl;
    return 0;

}