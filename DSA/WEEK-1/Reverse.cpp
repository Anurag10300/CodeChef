#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;
    int num;
    int revnum,rem;
    vector<int> ans;
    cin>>t;
    for (int i =0;i<t;i++){
        cin>>num;
        revnum = 0;

        while(num!=0){
            rem = num%10;
            num = num/10;
            revnum = rem+revnum*10;
            }

        ans.push_back(revnum);
    }


    for(int x=0;x<t;x++){
        cout<<ans[x]<<endl;
    }

}
