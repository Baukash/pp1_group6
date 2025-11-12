#include <iostream>
#include <map>
#include <set>
using namespace std;

int main(){
    set<int> s;
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        s.insert(x);
    }

    int j=0;
    for(auto i: s){
        if(j!=1){
            cout<<i;
            j=1;
        }
    }

    auto d = s.begin();
    cout<<*d;
}

// 1, 2, 3   // 1