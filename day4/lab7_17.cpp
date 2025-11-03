#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string decToHex(int n){
    string s="";
    while(n!=0){
        int a = n%16;
        n/=16;

        if(a>=0 && a<=9){
            s.push_back(a+48);
        }
        else if(a==10) s.push_back('A');
        else if(a==11) s.push_back('B');
        else if(a==12) s.push_back('C');
        else if(a==13) s.push_back('D');
        else if(a==14) s.push_back('E');
        else if(a==15) s.push_back('F');
    }
    return s;
}

int main(){
    int n;
    cin>>n;
    string s = decToHex(n);
    for(int i=s.size()-1; i>=0; i--){
        cout<<s[i]; 
    }
    reverse(s.begin(), s.end());

    cout<<endl<<s;
}

//Input: 754  16/4   Output: YES
