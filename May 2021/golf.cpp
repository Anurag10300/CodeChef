#include<iostream>
#include<vector>

using namespace std;

int main(){

    long long t;
    cin>>t;
    
    while(t--){
        long long x,k,N;
        cin>>N>>x>>k;

        int number = N+1;
        string res = "no";

        if(x%k==0){
            res="yes";
        }
        else
        {
             while(number>0){
                if(x==number){
                    res="yes";
                    break;
                }
                else{
                    number=number-k;
                }
            }
        }
        cout<<res<<endl;
    }
    
}