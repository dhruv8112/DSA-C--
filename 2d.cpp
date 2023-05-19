#include <iostream>

using namespace std;

int main()
{
    int row, column;
    cin >> row >> column;
    int a[row][column]; // Add semicolon at the end of the line

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> a[i][j];
            cout << a[i][j] << " "; // Add space to separate the numbers
        }
        cout << endl; // Add newline after each row
    }

    return 0; // Add a return statement to indicate successful program execution
}
