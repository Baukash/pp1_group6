#include <iostream>
#include <string>
using namespace std;

int main(){
    char c;
    cin>>c;

    /*if(int(c)>=97 && int(c)<=122){
        cout<<char(int(c)-32);
    }
    else{
        cout<<c;
    }*/
    if(c>='a' && c<='z'){
        cout<<char(toupper(c));
    }
    else{
        cout<<c;
    }

}

//Input: a    Output: A