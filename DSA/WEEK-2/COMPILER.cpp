#include<bits/stdc++.h>

using namespace std;


 int main(){
     int t;
     cin>>t;
     while(t--){


         string s;
         long long res=0,temp=0,ans=0;
         cin>>s;
         for(char c:s){
             res+=1;
             if(temp>=0){
                 if(c=='<'){
                     temp+=1;
                    
                }else{
                    temp-=1;
                    
                    if(temp==0){
                        ans = res;
                    }
                    
                }
             }
             
             else{
                 
                 break;
             }

        

             
         }
         
         if(ans==1){
            cout<<0<<endl;
        }else{
            cout<<ans<<endl;
        }

     }
     return 0;


 }