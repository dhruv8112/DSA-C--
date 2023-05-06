#include<iostream>
using namespace std;

int main(){
    int n, sum = 0, count;
    cin >> n;
    
    for (count = 1; count <= n; count++) {
        sum += count;
         cout << "The sum of the first " << n << " natural numbers is " << sum << endl;
    }
    
   
    
    return 0;
}
