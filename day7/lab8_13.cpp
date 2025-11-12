#include <iostream>
#include <map>
#include <set>
#include <vector>
using namespace std;

int main(){

    int n;
    cin>>n;
    int count=0;
    vector<string> v;
    for(int i=0; i<n; i++){
        map<string, int> m;
        m["Upper"]=0;
        m["Lower"]=0;
        m["Digits"]=0;
        

        string s;
        cin>>s;

        for(char j: s){
            if(j>='0' && j<='9') m["Digits"]++;
            else if(j>='A' && j<='Z') m["Upper"]++;
            else if(j>='a' && j<='z') m["Lower"]++;
        }

        if(m["Digits"]>=1 && m["Upper"]>=1 && m["Lower"]>=1){
            count++;
            v.push_back(s);
        }
    }

    cout<<count<<endl;

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<endl;
    }
    
}

// As3 32432sdfdsfsd 3252    Output: 2