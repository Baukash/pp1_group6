#include <iostream>
#include <map>
#include <set>
#include <vector>
using namespace std;

int main(){

    map<string, string> m;

    int n;
    cin>>n;

    while(n>0){
        string s;
        cin>>s;

        if(s=="set"){
            string key, value;
            cin>>key>>value;
            m[key] = value;
        }
        if(s=="get"){
            string  getKey;
            cin>>getKey;
            if(m.find(getKey)!=m.end()){
                cout<<m[getKey];
            }
            else{
                cout<<"KE: no key "<<getKey<<" found in the document";
            }
        }
        n--;
    }

    
}

/*
set key value
get key                     value
get sadasd                  KE: sadasdas
*/