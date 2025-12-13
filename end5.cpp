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
    int n;
    cin>>n;
    
    deque<int> dq;
    
    for(int i=0; i<n; i++){
      int x;
      cin>>x;
      dq.push_back(x);
    }
    
    int k;
    cin>>k;
    
    for(int i=0; i<k; i++){
      string com;
      cin>>com;
      
      if(com=="push"){
        string type;
        cin>>type;
        if(type=="back"){
          int x;
          cin>>x;
          dq.push_back(x);
        }
        else if(type=="front"){
          int x;
          cin>>x;
          dq.push_front(x);
        }
        
        for(int j: dq){
          cout<<j<<" ";
        }
        cout<<endl;
      }
      else if(com=="erase"){
        int l, r;
        cin>>l>>r;
        deque<int> dq1;
        for(int j=0; j<dq.size(); j++){
          if(j>=l-1 && j<=r-1){
            continue;
          }
          else{
            dq1.push_back(dq[j]);
          }
        }
        dq = dq1;
        
        for(int j: dq){
          cout<<j<<" ";
        }
        cout<<endl;
      }
    }
    
    
}



//2
//18 35
//2
//push back 4
//erase 1 3
