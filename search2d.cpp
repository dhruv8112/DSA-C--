#include <iostream>
using namespace std;

void search(int r, int c, int a[][100], int key)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] == key)
            {
                cout << "Found " << key << endl;
                return;
            }
        }
    }
    cout << "Not found" << endl;
}

int main()
{
    int row, column;
    int key;
    cin >> row >> column;
    int a[][100]; // Assuming maximum size of the array is 100x100

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> a[i][j];
            cout << a[i][j] << endl;
        }
    } 

        cin >> key;
    search(row, column, a, key);

    return 0;
}
