#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float hyp(int a, int b){
    float c = sqrt(a*a+b*b);
    return c;
}

int main(){
    int a,b;
    cin>>a>>b;

    cout<<setprecision(4);

    cout<<hyp(a,b);
}