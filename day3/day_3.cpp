#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    // 1 23 4 5 3 6
    // 43 4 2 3 4 6
    //34 5 56 2 34 5 

    int arr[2][3] = {{1,2,3}, {4,5,6}};

    int a[5] = {1,2,3,4,5};

    /*for(int i=0; i<5; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }*/


    vector<int> v;
    
    v.push_back(2);
    v.push_back(3);
    
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.pop_back();
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    string s = "";
    
    for(int i=1; i<=9; i++){
        s.push_back(char(i+48));
        cout<<s[i-1]<<" ";
    }

    

}