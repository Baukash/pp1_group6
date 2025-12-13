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

bool cmp(int a, int b){
  return a>b;
}

int main() 
{
    vector<int> v;
    int n, l, r;
    cin>>n>>l>>r;
    
    for(int i=0; i<n; i++){
      int x;
      cin>>x;
      v.push_back(x);
    }
    sort(v.begin(), v.begin()+l);
    sort(v.begin()+r-1, v.end(), cmp);
    
    for(int i: v){
      cout<<i<<" ";
    }
    
    
}



//5 2 4                              1 2 3 5 4
//3 2 1 4 5
