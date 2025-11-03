#include <iostream>
#include <string>
using namespace std;

int main(){
  string s;
  cin>>s;
  bool isPol = true;
  char w = 'a';
  while(w!='z'){
    isPol = true;
    int i=0, j=s.size();
    s.push_back(w);


    while(i<j){
        if(s[i]!=s[j]){
            isPol=false;
            break;
        }
        else{
            i++;
            j--;
        }
    }

    if(isPol) break;
    s.pop_back();
    w++;
  }
    
  
  if(isPol) cout<<"YES";
  else cout<<"NO";
  
    
}
//Input: abdc Output: no abba s2="ab" s1="ab"
//Input: abb  Output: yes
