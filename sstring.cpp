#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <sstream>
#include <string>
using namespace std;




int main() 
{
    string s;
    getline(cin, s);
    
    stringstream ss(s);
    
    vector<string> v;
    
    string num;
    
    while(getline(ss, num, ',')){
      v.push_back(num);
    }
    
    for(string i:v){
      cout<<i<<" ";
    }
}

//5! = 5*4*3*2*1 = 120
//5! = 5*4!

//5*4*3*2*1
 
