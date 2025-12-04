#include <iostream>
using namespace std;
class matrix
{
    int a[10][10];
    int r, c;
public:
    matrix(){}
    matrix(int row, int col)
    {
        r=row;
        c=col;
    }
    void input()
    {
        cout << "Enter elements of matrix (" << r << "x" << c << "):\n";
        for(int i = 0; i < r; i++)
        {
            for(int j = 0; j < c; j++)
            {
                cin >> a[i][j];
            }
        }
    }
    void display()
    {
        for(int i = 0; i < r; i++)
        {
            for(int j = 0; j < c; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }

    friend matrix operator*(matrix &m1, matrix &m2);
};

matrix operator*(matrix &m1, matrix &m2)
{
    matrix temp(m1.r,m2.c);
    if(m1.c!=m2.r)
    {
        cout << "Multiplication not possible\n" << endl;
        return temp;
    }
    for(int i = 0; i < m1.r; i++)
    {
        for(int j = 0; j < m2.c; j++)
        {
            temp.a[i][j] = 0;
            for(int k = 0; k < m1.c; k++)
            {
                temp.a[i][j] += m1.a[i][k] * m2.a[k][j];
            }
        }
    }
    return temp;
}
int main()
{
    int r1,r2,c1,c2;
    cout << "Enter rows and columns for Matrix 1: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for Matrix 2: ";
    cin >> r2 >> c2;

    matrix m1(r1,c1), m2(r2,c2);
    m1.input();
    m2.input();

    matrix m3 = m1 * m2;
    cout << "Resultant: \n";
    m3.display();

    return 0;
}