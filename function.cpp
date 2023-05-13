#include<iostream>
using namespace std;

int add(int a, int b) {
    int s=a+b;
    return s;
}


int main(){
    int i,b,c=40,d=50;
    cout << "Enter the number of  I";
    cin >> i;
    cout << "Enter the number of B";
    cin >> b;
    cout << add(i,b)<<endl;
    cout << add(d,c)<<endl;
}