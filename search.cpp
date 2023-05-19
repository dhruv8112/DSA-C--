

#include <iostream>
using namespace std;

int linear(int x, int y, int a[])
{
    for (int i = 0; i < x; i++)
    {
        if (a[i] == y)
        {
            cout << "Element found at index: " << i << endl;
            return 0;
        }
           
    }
     cout << "Element not found." << endl;
            
}

int main()
{
    int n, key;

    cin >> n;
    int a[n];
    cout << "Enter array: ";

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cout << a[i] << " ";
    }
    cout << endl;

    cout << "Enter key: ";
    cin >> key;

    linear(n, key, a);

    return 0;
}
