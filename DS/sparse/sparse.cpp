#include <iostream>
using namespace std;
int main()
{
    int m, n, size = 0;
    cout << "Enter no of rows and columns in matrix" << endl;
    cin >> m >> n;
    int arr[m][n];
    cout << "Enter the sparse matrix" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] != 0)
                size++;
        }
    }
    int sp[size+1][3], row = 1;
    sp[0][0] = m;
    sp[0][1] = n;
    sp[0][2] = size;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] != 0)
            {
                sp[row][0] = i;
                sp[row][1] = j;
                sp[row][2] = arr[i][j];
                row++;
            }
        }
    }
    cout << endl;
    for (int i = 0; i < size+1; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << sp[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}