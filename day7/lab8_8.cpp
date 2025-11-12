#include <iostream>
#include <map>
using namespace std;

int main(){
    int n;
    cin>>n;
    map<int, int> m;

    for(int i=0; i<n; i++){
        int A, B, C, D;
        cin>>A>>B>>C>>D;

        int start = 1;
        int end = 1439;

        int open = A*60+B;
        int close = C*60+D;

        

        if(open < close ){
            for(int j=open; j<close; j++){
                m[j]+=1;
            }
        }
        else if(open==close){
            for(int j=start; j<end; j++){
                m[j]+=1;
            }
        }
        else{
            for(int j=open; j<end; j++){
                m[j]+=1;
            }
            for(int j=start; j<close; j++){
                m[j]+=1;
            }
        }
    }

    int count=0;

    for(const auto &i: m){
        if(i.second==n) count++;
    }

    cout<<count;


}

// 1 0 23 0