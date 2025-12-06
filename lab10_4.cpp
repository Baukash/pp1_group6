#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


struct Point{
  int x;
  int y;
};

int comp(Point p1, Point p2){
  if(p1.x==p2.x) return p1.y<p2.y;
  return p1.x<p2.x;
}


int main() 
{
    vector<Point> v;
    int n;
    cin>>n;
    
    for(int i=0 ;i<n; i++){
      int x;
      int y;
      cin>>x>>y;
      Point p;
      p.x = x;
      p.y = y;
      v.push_back(p);
    }
    
    sort(v.begin(), v.end(), comp);
    
    
    for(Point i:v){
      cout<<i.x<<" "<<i.y<<endl;
    }
    
    
}


//4
//1 4
//2 3
//1 6
//3 -1
