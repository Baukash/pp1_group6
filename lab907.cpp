#include <iostream>
#include <utility>
#include <vector>
#include <map>
using namespace std;

int main(){
  map<string, string> m;
  int n;
  cin>>n;
  
  for(int i=0; i<n; i++){
    string name, pas;
    cin>>name>>pas;
    
    m[name] = pas;
  }
  
  int j;
  cin>>j;
  
  for(int i=0; i<j; i++){
    string name, pas;
    cin>>name>>pas;
    
    
    if(m.find(name)==m.end()){
      cout<<"login error"<<endl;
    }
    else{
      if(m["Aidos"]==pas) cout<<"correct password"<<endl;
      else cout<<"password error"<<endl;
    }
  }
  
  
}
