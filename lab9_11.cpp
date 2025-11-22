#include <iostream>
#include <map>
#include <utility>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int comp(char a, char b){
  return a<b;
}

int main() 
{
    int days;
    cin>>days;
    
    map<string, double> m;

    int count=0;
    
    for(int i=0; i<days; i++){
      int n;
      cin>>n;
      for(int j=0; j<n; j++){
        string city;
        double num;
        cin>>city>>num;
        count+=num;
        m[city]+=num;
      }
    }
    
    for(auto& i: m){
      cout<<i.first<<" "<<(i.second/count)*100<<"%"<<endl;
    }
}

//2
//3
//Astana 124
//Aamty 234
//Aktau 21
//1
// Pavlodar 2334

//
