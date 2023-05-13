#include <iostream>

using namespace std;

int fib(int x) {
    if (x <= 0) {
        cout << "Invalid input!" << endl;
        return -1;
    } else if (x == 1) {
        return 0;
    } else if (x == 2) {
        return 1;
    } else {
        int a = 0;
        int b = 1;
        int fibNum = 0;

        for (int i = 3; i <= x; i++) {
            fibNum = a + b;
            a = b;
            b = fibNum;
        }

        return fibNum;
    }
}

int main() {
    int i;
    cin >> i;
    cout << fib(i) << endl;

    return 0;
}
 