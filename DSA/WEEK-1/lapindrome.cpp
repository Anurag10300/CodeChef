#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        string s1,s2;
        cin>>s;
        int l=0;
        l=s.length();
        
        int m=0;
        if(l==1){
            m=0;
        }else{
            m=int(((l)/2)-1);
        }
        
        
      

        if(l%2==0){
            for(int i=0;i<=m;i++){
                s1+=s[i];
            }
            for(int i=m+1;i<l;i++){
                s2+=s[i];
                
            }
        }else{
            for(int i=0;i<=m;i++){
                s1+=s[i];
                
            }
            for(int i=m+2;i<l;i++){
                s2+=s[i];
            }
        }

        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());

        if(s1==s2){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }




    }
    return 0;
}