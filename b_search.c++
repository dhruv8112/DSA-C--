#include <iostream>
using namespace std;

void search(int n, int key, int a[])
{
    for (int start = 0, end = n - 1; start <= end;)
    {
        int mid = (start + end) / 2;

        if (a[mid] == key)
        {
            cout << "Element found at index: " << mid << endl;
            return; // Exit the function after finding the element
        }
        else if (a[mid] > key)
        {
            end = mid - 1; // Update the end boundary
        }
        else if (a[mid] < key)
        {
            start = mid + 1; // Update the start boundary
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

    search(n, key, a);

}
