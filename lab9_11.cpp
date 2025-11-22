#include <iostream>
#include <map>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

int comp(char a, char b){
  return a<b;
}

int main() 
{
    int days;
    cin>>days;
    
    vector<pair<string, double>> v;
    
    int count=0;
    
    for(int i=0; i<days; i++){
      int n;
      cin>>n;
      
      for(int j=0; j<n; j++){
        string city;
        double num;
        cin>>city>>num;
        count+=num;
        pair<string, double> x = {city, num};
        v.push_back(x);
      }
    }
    
    sort(v.begin(), v.end());
    
    for(auto i: v){
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
