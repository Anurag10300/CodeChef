#include<bits/stdc++.h>

using namespace std;

int main(){
    int test;
    cin>>test;

    while(test--){


        int n ; 
        string s;

        pair<int,int> a = {0,0};
        pair<int,int> b = {0,0};

        cin>>n>>s;
        
        int flag=0;

        for(int i =0;i<2*n;i++){
            if(i%2==0){
                if(s[i]=='1'){
                    a.first+=1;
                }else{
                    a.second+=1;
                }
            }else{
                if(s[i]=='1'){
                    b.first+=1;
                }else{
                    b.second+=1;
                }
            }

            if(a.first>b.first){
                if(a.first>b.first+n-(b.first+b.second)){
                    cout<<i+1<<endl;
                    flag=1;
                    break;
                }
            }else if(b.first>a.first){
                if(b.first>a.first+n-(a.first+a.second)){
                    cout<<i+1<<endl;
                    flag=1;
                    break;
                }
            }





        }
        if(flag==0){
            cout<<2*n<<endl;
        }

       

    }
    return 0;
}