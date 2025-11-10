#include <iostream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

int main(){
    int num;

    vector<int> v;

    while(cin>>num){
        v.push_back(num);
    }
    
    int sum=0;
    
    for(int i: v){
        sum+=i;
    }
    
    cout<<sum;
}
//Input: 58,18,81