#include <iostream>
using namespace std;
int main()
{
    int m, n, m1, n1, size = 0, size1 = 0;
    cout << "Enter no of rows and columns in matrix 1" << endl;
    cin >> m1 >> n1;
    int arr1[m1][n1];
    cout << "Enter the sparse matrix 1" << endl;
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            cin >> arr1[i][j];
        }
    }
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            if (arr1[i][j] != 0)
                size1++;
        }
    }
    int sp1[size1+1][3], row1 = 1;
    sp1[0][0] = m1;
    sp1[0][1] = n1;
    sp1[0][2] = size1;
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            if (arr1[i][j] != 0)
            {
                sp1[row1][0] = i;
                sp1[row1][1] = j;
                sp1[row1][2] = arr1[i][j];
                row1++;
            }
        }
    }
    cout << "Enter no of rows and columns in matrix 2" << endl;
    cin >> m >> n;
    int arr[m][n];
    cout << "Enter the sparse matrix 2" << endl;
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
    int sp[size + 1][3], row = 1;
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
    int tr[size + 1][3], temp[3];
    for (int i = 0; i <= size; i++)
    {
        tr[i][0] = sp[i][1];
        tr[i][1] = sp[i][0];
        if (i != 0)
            tr[i][2] = sp[i][2];
    }
    tr[0][2] = sp[0][2];
    int s = size;
    while (s > 1)
    {
        for (int i = 1; i < s; i++)
        {
            if (tr[i][0] > tr[i + 1][0])
            {
                for (int j = 0; j < 3; j++)
                {
                    temp[j] = tr[i][j];
                    tr[i][j] = tr[i + 1][j];
                    tr[i + 1][j] = temp[j];
                }
            }
            else if (tr[i][0] == tr[i + 1][0] && tr[i][1] > tr[i + 1][1])
            {
                for (int j = 1; j < 3; j++)
                {
                    temp[j] = tr[i][j];
                    tr[i][j] = tr[i + 1][j];
                    tr[i + 1][j] = temp[j];
                }
            }
        }
        s--;
    }
    











    cout << endl;
    for (int i = 0; i < size + 1; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << sp[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Transpose: " << endl;
    for (int i = 0; i < size + 1; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << tr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}