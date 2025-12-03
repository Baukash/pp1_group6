#include <iostream>
using namespace std;

void rec(int n, int i){
  if(n==1) cout<<n-i;
  else{
    cout<<n-i<<" ";
    i-=2;
    rec(n-1, i);
  }
}

int main(){
  int n;
  cin>>n;
  
  rec(n, n-1);
}

//6 5 4 3 2 1
//1 2 3 4 5 6

//6-5 1
//5-3 2
//4-1 3
//3+1 4
//2+3 5
//1+5 6

//
