#include <iostream>
using namespace std;

int rec(string s, int i, char max){
  if(i==s.size()-1) return max-48;
  if(s[i]>max) max = s[i];
  return rec(s, i+1, max);
}
// 2364185 max=8

int main(){
  string s;
  cin>>s;
  
  cout<<rec(s, 0, -214141);
}


//12345

