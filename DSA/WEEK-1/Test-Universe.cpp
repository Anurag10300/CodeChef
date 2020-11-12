#include <iostream>
#include <vector>
using namespace std;

int main() {
    int num;
    vector<int> arr;
    scanf("%d",&num);

	while(num!=42){

        arr.push_back(num);

        scanf("%d",&num);
	}

	for (auto i= arr.begin(); i!=arr.end();++i){
        std::cout<<*i<<endl;
	}

}
