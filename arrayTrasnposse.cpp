#include <iostream>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;

    int a[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout<<"Array transposed"<<endl;
    int b[c][r]; // Transposed array

    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            b[i][j] = a[j][i];
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
