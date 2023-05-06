#include <iostream>
using namespace std;

int main(){
    int age;
    bool dia;
    
    cout << "Enter your age: ";
    cin >> age;

    if (age > 18){
        cout << "Are you diabetic? (0 for no, 1 for yes): ";
        cin >> dia;
        
        if (dia){
            cout << "Not allowed to donate blood.";
        }   
        else{
            cout << "Allowed to donate blood!";
        }
    }
    else{
        cout << "Underaged. Not allowed to donate blood.";
    }
    
    return 0;
}
