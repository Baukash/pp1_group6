#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <deque>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
  return a.first>b.first;
}

int main() 
{
    vector<pair<int, int>> v;
    
    int n;
    cin>>n;
    
    for(int i=0 ;i<n; i++){
      int x, y;
      cin>>x>>y;
      pair<int, int> tempP = {x, y};
      v.push_back(tempP);
    }
    
    sort(v.begin(), v.end(), cmp);
    
    for(pair i: v){
      cout<<i.first<<" "<<i.second<<endl;
    }
    
    
}



//5                     
//8 0
//9 30
//8 30
//7 35
//7 30
