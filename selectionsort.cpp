#include <iostream>

using namespace std;

void sort(int n, int a[]) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
}

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(n, a);

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
