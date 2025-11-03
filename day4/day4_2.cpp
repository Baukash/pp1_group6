#include <iostream>
using namespace std;


bool isP(string s, int i, int j){
    while(i<j){
        if(s[i]!=s[j]){
            return false;
            break;
        }
        else{
            i++;
            j--;
        }
    }
    return true;
}


int main(){
  string s;
  cin>>s;
  bool isPol = true;
  char w = 'a';
  while(w!='z'){
    isPol = true;
    int i=0, j=s.size();
    s.push_back(w);


    isPol = isP(s, i, j);

    if(isPol) break;
    s.pop_back();
    w++;
  }
    
  
  if(isPol) cout<<"YES";
  else cout<<"NO";
  
    return 0;
}
//Input: abdc Output: no abba s2="ab" s1="ab"
//Input: abb  Output: yes

