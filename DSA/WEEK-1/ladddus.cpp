#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin>>test;

    while(test--){
        int months=0;
        int num;
        int laddus=0;

        string origin;

        cin>>num>>origin;

        while(num--){
            string act;
            int num1;

            cin>>act;
            if(act=="CONTEST_WON"){
                cin>>num1;
                if(num1<20){
                     laddus+=300+(20-num1);
                }else{
                    laddus+=300;
                }
               
            }
            if(act=="TOP_CONTRIBUTOR"){
                laddus+=300;
            }
             if(act=="BUG_FOUND"){
                cin>>num1;
                laddus+=num1;
            }
            if(act=="CONTEST_HOSTED"){
                laddus+=50;
            }
        }






        if(origin=="INDIAN"){
            while(laddus>=200){
                laddus=laddus-200;
                months+=1;
            }
        }else{
            while(laddus>400){
                laddus=laddus-400;
                months+=1;
            }
        }
        cout<<months<<endl;
    }
}