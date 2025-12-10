#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int a[100][100];
    
    bool id = true;
    
    for(int i=0; i<3; i++){
      for(int j=0; j<3; j++){
        cin>>a[i][j];
      }
    }
    
    for(int i=0; i<3; i++){
      for(int j=0; j<3; j++){
        if(a[i][j]!=a[j][i]) id = false;
      }
      cout<<endl;
    }
    
    if(id) cout<<"prefect";
    else cout<<"not perfect";
    
    
}




//1 2 3
//2 4 5
//3 5 6

//4

//perfect
//not perfect
