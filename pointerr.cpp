#include<iostream>

using namespace std;

int main(){

    int a=20;
    cout<<a;
    int *ab=&a;
    *ab=50;

    cout<<a;
    cout<<*ab<<endl;
}