#include <iostream>
#include <string>
using namespace std;

int main(){
    string a,b;
    cin>>a>>b;

    bool isSame = true;

    /*if(a.size()==b.size()){
        for(int i=0; i<a.size(); i++){
            if(a[i]!=b[i]) {
                isSame = false;
                break;
            }
        }
    }
    else{
        isSame = false;
    }

    if(isSame) cout<<"YES";
    else cout<<"NO";*/

    if(a==b) cout<<"YES";
    else cout<<"NO";
}

//Input: aa aa    Output: YES
//Input: aa ab    Output: NO