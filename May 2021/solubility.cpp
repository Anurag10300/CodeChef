#include<iostream>
#include<vector>

using namespace std;

int main(){

    int t;
    cin>>t;
    vector<int> sols;
    while(t--){
        int intemp,a,b;
        cin>>intemp>>a>>b;

        int soluble = (a+(100-intemp)*b)*10;
        sols.push_back(soluble);
    }
    for(auto a:sols){
        cout<<a<<endl;
    }
}