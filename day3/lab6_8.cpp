#include <iostream>
#include <string>
using namespace std;

int main(){
  string s1;
  cin>>s1;
  bool isPol = false;
  char w = 'a';
  string s3 = s1;
  while(w!='z'){
        s3.push_back(w);
        string s2="";
        int n = s3.size()/2;
        string s4 = s3;
        for(int i=s3.size()-1; i>=n; i--){
          s2.push_back(s3[i]);
          s4.pop_back();
        }
        
        if(s4==s2){
            isPol = true;
            break;
        }
        else {
            s3.pop_back();
            w +=1;
        }
  }
    
  
  if(isPol) cout<<"YES";
    else cout<<"NO";
  
    
}
//Input: abdc Output: no abba s2="ab" s1="ab"
//Input: abb  Output: yes