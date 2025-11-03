#include <iostream>
using namespace std;

bool isLucky(string s){
    int sum=0, last = int(s[s.size()-1])-48; 

    for(int i=0; i<s.size(); i++){
        sum+=(int(s[i])-48);
    }

    if(sum%last==0) return true;
    else return false;
}

int main(){
    string s;
    cin>>s;

    if(isLucky(s)) cout<<"YES";
    else cout<<"NO";
}

//Input: 754  16/4   Output: YES
