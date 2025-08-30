#include <iostream>
using namespace std;
int main()
{
    int m1, n1, size1 = 0;
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
    int sp1[size1 + 1][3], row1 = 1;
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
    int m2, n2, size2 = 0;
    cout << "Enter no of rows and columns in matrix 2" << endl;
    cin >> m2 >> n2;
    if (m1 != m2 || n1 != n2)
    {
        cout << "Addition not possible as dimensions don't match" << endl;
        return 0;
    }
    int arr2[m2][n2];
    cout << "Enter the sparse matrix 2" << endl;
    for (int i = 0; i < m2; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cin >> arr2[i][j];
        }
    }
    for (int i = 0; i < m2; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (arr2[i][j] != 0)
                size2++;
        }
    }
    int sp2[size2 + 1][3], row2 = 1;
    sp2[0][0] = m2;
    sp2[0][1] = n2;
    sp2[0][2] = size2;
    for (int i = 0; i < m2; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (arr2[i][j] != 0)
            {
                sp2[row2][0] = i;
                sp2[row2][1] = j;
                sp2[row2][2] = arr2[i][j];
                row2++;
            }
        }
    }
    int i = 1, j = 1, k = 1, arr[row1 + row2][3];
    arr[0][0] = m1;
    arr[0][1] = n1;
    while (i < row1 && j < row2)
    {
        if (sp1[i][0] == sp2[j][0] && sp1[i][1] == sp2[j][1])
        {
            arr[k][0] = sp1[i][0];
            arr[k][1] = sp1[i][1];
            arr[k][2] = sp1[i][2] + sp2[j][2];
            i++;
            j++;
            k++;
        }
        else if (sp1[i][0] < sp2[j][0] || (sp1[i][0] == sp2[j][0] && sp1[i][1] < sp2[j][1]))
        {
            arr[k][0] = sp1[i][0];
            arr[k][1] = sp1[i][1];
            arr[k][2] = sp1[i][2];
            i++;
            k++;
        }
        else
        {
            arr[k][0] = sp2[j][0];
            arr[k][1] = sp2[j][1];
            arr[k][2] = sp2[j][2];
            j++;
            k++;
        }
    }

    while (i < row1)
    {
        arr[k][0] = sp1[i][0];
        arr[k][1] = sp1[i][1];
        arr[k][2] = sp1[i][2];
        i++;
        k++;
    }
    while (j < row2)
    {
        arr[k][0] = sp2[j][0];
        arr[k][1] = sp2[j][1];
        arr[k][2] = sp2[j][2];
        j++;
        k++;
    }

    arr[0][2] = k - 1;

    cout << "After adding...." << endl;
    for (int m = 0; m < k; m++)
    {
        for (int n = 0; n < 3; n++)
        {
            cout << arr[m][n] << " ";
        }
        cout << endl;
    }
    return 0;
}