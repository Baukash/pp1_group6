#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <deque>
#include <string>
#include <sstream>
using namespace std;

int main() 
{
    int a,b;
    cin>>a>>b;
    vector<int> v1;
    vector<int> v2;
    bool isp;
    
    for(int i=a; i<=b; i++){
      v1.push_back(i);
    }
    int n;
    while(cin>>n){
      v2.push_back(n);
    }
    
    for(int i=0; i<v1.size(); i++){
      for(int j=0; j<v2.size(); j++){
        if(v1[i]==v2[j]){
          isp = false;
          break;
        }
        else{
          isp = true;
        }
      }
      if(isp) cout<<v1[i]<<" ";
    }
}



//1 10
//3 4 1 7 9
//2 5 6 8 10
