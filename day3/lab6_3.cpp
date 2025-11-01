#include <iostream>
#include <string>
using namespace std;

int main(){
  int n;
  cin>>n;

  if(n>=0 && n<=9) cout<<n;
  else if(n==10) cout<<'A';
  else if(n==11) cout<<'B';
  else if(n==12) cout<<'C';
  else if(n==13) cout<<'D';
  else if(n==14) cout<<'E';
  else if(n==15) cout<<'F';
    
    
}
//0<n<15
//Input:10     Output:A 
//Input:1     Output:1 
// 0,1,2,3,4,5,6,7,8,9
// 0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F,10,11,12,13,14,15,16,17,18,19,1A,1B.....