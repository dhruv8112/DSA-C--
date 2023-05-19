#include <iostream>
using namespace std;

void bubbleSort(int size, int ar[])
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (ar[j] > ar[j + 1])
            {
                swap(ar[j], ar[j + 1]);
            }
        }
    }

}

int print_array(int ar[],int size){
 cout << "Sorted array: ";
    for (int i = 0; i < size; i++)
    {
        cout << ar[i] << " ";
    }
    cout << endl;
} 


int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int a[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cout<<"unsort "<<a[i];
    }

    bubbleSort(n, a);
    print_array(a,n);
    return 0;
}
