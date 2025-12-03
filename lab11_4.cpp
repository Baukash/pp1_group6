#include <iostream>
using namespace std;

int rec(int n){
  if(n==0) return 1;
  return 2*rec(n-1);
}

int main(){
  int n;
  cin>>n;
  
  cout<<rec(n);
}


//2^5=32  2^4 = 16 2^5=2^4*2  2^n = 2*2^(n-1)

//2*2*2*2*1


//
