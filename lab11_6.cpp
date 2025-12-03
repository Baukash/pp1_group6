#include <iostream>
using namespace std;

int rec(string s, int i){
  if(i==s.size()-1) return s[i]-48;
  return s[i]-48+rec(s, i+1);
}

int main(){
  string s;
  cin>>s;
  
  cout<<rec(s, 0);
}


//12345
//15
//1 + 2 + 3 + 4 + 

