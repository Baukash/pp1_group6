#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    vector<int> v1;
    vector<int> v2;
    
    int n;
    cin>>n;
    
    for(int i=0; i<n; i++){
      int x;
      cin>>x;
      v1.push_back(x);
    }
    
    for(int i=0; i<n; i++){
      int x;
      cin>>x;
      v2.push_back(x);
    }
    
    int count=0;
    
    for(int i=0; i<n; i++){
      for(int j=0; j<n; j++) {
        if(v1[i]==v2[j]){
          v2[j]=0;
          count++;
          break;
        } 
      }
    }
    
    cout<<count;
    return 0;
}




//6
//4 3 1 2 4 1 
//3 1 1 5 4 

//4
