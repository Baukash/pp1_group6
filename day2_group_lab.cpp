
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    string s;
    cin>>s;

    int max=int(s[0]);

    bool isAlph = true;
    
    for(int i=1; i<s.size(); i++){
        cout<<max<<" "<<int(s[i])<<endl;
        if(max>int(s[i])){
            isAlph = false;
            break;
        }
        else{
            max = int(s[i]);
        }
    }


    
    if(isAlph){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
