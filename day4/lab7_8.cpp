#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n){
    if(n==1 && n==2 && n==3) return true;
    else if(n==0) return false;
    else{
        for(int i=3; i*i<=n; i+=2){
            if(n%i==0) return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;

    cout<<isPrime(n);
}

//Input: 754  16/4   Output: YES
