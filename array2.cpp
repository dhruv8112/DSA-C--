#include <iostream>
#include <climits> // For INT_MAX and INT_MIN
using namespace std;

int main()
{
    int maxElement = INT_MIN;
    int minElement = INT_MAX;

     int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > maxElement)
        {
            maxElement = arr[i];
        }
        if (arr[i] < minElement)
        {
            minElement = arr[i];
        }
    }

    cout << "Maximum element: " << maxElement << endl;
    cout << "Minimum element: " << minElement << endl;

    return 0;
}
