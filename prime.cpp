#include <iostream>
using namespace std;

int main() {
    int i;
    cin >> i;

    for (int a = 0; a < i; a++) {
        if (a % 2 == 0) {
            cout << a << " is even";
        } else {
            cout << a << " is odd";
        }

        cout << endl;
    }

    return 0;
}
