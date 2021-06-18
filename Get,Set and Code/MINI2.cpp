#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long sq= sqrt(n);
        long long x,y;


        for(long long i = sq;i>=1;i--){
            if(n%i==0){
                x=i;
                y=n/i;
                break;
            }

        }
        cout<<x+y<<endl;



    }


}
