#include<iostream>
using namespace std;

int main(){
    int f=1 ,i,a;
    cout<<"Enter a Number";
    cin>>a;

    for(i=1; i<=a;i++){
        f*=i;
    }
    
    cout<<f;

    
}