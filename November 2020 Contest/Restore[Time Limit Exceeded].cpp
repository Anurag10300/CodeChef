
// This code produces right answers but the time complexity is very high
// cant give answers for large input in time



#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;


int main(){

    int t;
    scanf("%d",&t);
    vector<vector<int>> table;


    //COLLECTING INPUT
    for(int i=0;i<t;i++){
        long n;
        scanf("%d",&n);
        // initialising vector
        vector<int> arr;
        // taking the array as an input
        for(long j=0;j<n;j++){
            int ele;
            cin>>ele;
            arr.push_back(ele);
        }
        table.push_back(arr);
        }
        //INPUT COLLECTED IN VECTOR called table




    int value;
    for(int x =0;x<table.size();x++){

        int key = 2;
        //initialising a separate answer array for each separate row in vector
        int a[table[x].size()];


        //for setting array a as 1
        for(int k=0;k<table[x].size();k++){
            a[k]=1;
        }

        for (int y = 0;y<table[x].size();y++){


            value=table[x][y]-1;
            if (a[y]==1){
                    if(y==value){
                      a[y]=a[y]*key;
                    }
                    else{
                        a[y]=a[y]*key;
                        a[value]=a[value]*key;
                    }}
            else{
                a[y]=a[y]*key;
            }
            cout<<a[y]<<" ";
            key++;
            bool notprime = true;

            // if key is not  prime, this loop will keep increasing it untill it is prime
            while(notprime){

                for(int chk=0;chk<=y;chk++){
                    if(key%a[chk]==0){
                        key++;
                        break;
                    }
                    if(chk==y){
                        notprime = false;
                    }

                }

            }






        }
    printf("\n");
    }

    return 0;





}
