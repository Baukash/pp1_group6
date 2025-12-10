#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    
    vector<int> v1;
    vector<int> v2;
    
    for(int i=0; i<n; i++){
      int x;
      cin>>x;
      v1.push_back(x);
    }
    for(int i=0; i<=n; i++){
      v2.push_back(i);
    }
    
    sort(v1.begin(), v1.end());
    
    for(int i=0; i<=n; i++){
      if(v1[i]!=v2[i]){
        cout<<i;
        break;
      }
    }
    
    
}


//6
//0 1 2 3 4 5 6     
//0 1 2 3 4 5 -123213



//2
