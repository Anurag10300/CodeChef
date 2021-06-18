#include <iostream>
using namespace std;

int main(){
    long t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    long long a=1,b=2,c=4,d=3;


    cout<<endl<<a<<" ";
    for(int i=0;i<n-1;i++){

        a=(a*2)+2;
        cout<<a<<" ";
    }

    cout<<endl;
    cout<<b<<" ";
    for(int i=0;i<n-1;i++){

        b=(b*2)+1;
        cout<<b<<" ";
    }

    cout<<endl;
    cout<<c<<" ";
    for(int i=0;i<n-1;i++){

        c=(c*2)+2;
        cout<<c<<" ";
    }

    cout<<endl;
    cout<<d<<" ";
    for(int i=0;i<n-1;i++){


        d=(d*2);
        cout<<d<<" ";
    }




    }



}
