#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;


struct Point{
  int x;
  int y;
};

Point p0;



int comp(Point p1, Point p2){
  int d1 = pow(p1.x-p0.x, 2)+pow(p1.y-p0.y, 2);
  int d2 = pow(p2.x-p0.x, 2)+pow(p2.y-p0.y, 2);
  
  if(d1<d2) return true;
  return false;
}



int main() 
{
    vector<Point> v;
    int n;
    cin>>n;
    
    int x0, y0;
    cin>>x0>>y0;
    p0.x = x0;
    p0.y = y0;
    
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
