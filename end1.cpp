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
    map<string, vector<string>> m;
    int n;
    cin>>n;
    
    for(int i=0; i<n; i++){
      string name;
      cin>>name;
      string stuff;
      getline(cin, stuff);
      stringstream ss(stuff);
      string s;
      while(ss>>s){
        m[name].push_back(s);
      }
    }
    
    for(auto i: m){
      cout<<i.first<<": ";
      for(int j=0; j<i.second.size(); j++)  {
        cout<<i.second[j]<<" ";
      }
      cout<<endl;
    }
    return 0;
}



//4
//Damira Chair Scarf Spoon
//Alexey Smth Fork Bottle
//Damira Pillow Towel
//Mark Drinks Cakes Shoes

//Damira: Chair Scarf Spoon Pillow Towel
//Alexey: Smth Fork Bottle
//Mark: Drinks Cakes Shoes

