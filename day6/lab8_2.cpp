#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int num;

    vector<int> v;
    int minInd=0, maxInd=0, i=0;

    while(cin>>num){
        v.push_back(num);
        if(v[minInd]>num) minInd=i;
        if(v[maxInd]<num) maxInd=i;
        i++;
    }
    
    
    cout<<v[minInd]<<" "<<v[maxInd];
}
//Input: 58,18,81