#include <iostream>

using namespace std;
int dry_run(int n, int a[])
{   
    int max=a[0];

    for (int i = 0; i < n; i++)
    {
        if(max > a[i]){
            cout << "max: " << max ;
        }
        else{
            max=a[i];
            cout << "max: " << max ;
        }
          cout << endl;
    }
}

int main()
{
    int size;
    cin >> size;

    int a[size];

    for (int i = 0; i < size; i++)
    {
        cin >> a[i];

        cout << a[i]<<" ";
    }
    cout << endl;
    dry_run(size, a);
}