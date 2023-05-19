#include <iostream>

using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int a[size];
    cout << "Enter array elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += a[i];
        cout << sum << " ";
    }

    cout << endl;

    return 0;
}
