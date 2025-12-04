#include <iostream>
using namespace std;
void check(int m, int n)
{
    int c=0,r1,r2,d=4,y=m,z,w=0;
    for(int i=1;i<=d;i++)
    {
        r1=y%10;
        y/=10;
        z=n;
        for(int j=1;j<=d;j++)
        {
            r2=z%10;
            z/=10;
            if(r2==r1)
            {
                c++;
                break;
            }
        }
    }
    cout << "No of correct digits: " << c << endl;
    if(c==4)
        w++;
    c=0;
    for(int i=1;i<=d;i++)
    {
        if(m%10 == n%10)
            c++;
        m/=10;
        n/=10;
    }
    cout << "No of correct digits with correct places: " << c << endl;
    if(w==1 && c==4)
        cout << "\nCONGRATULATIONS......YOU GUESSED THE RIGHT CODE !!!!" << endl;
}
int main()
{
    int m , n=4836;
    cout << "Enter your guess: ";
    cin >> m;
    check(m,n);

}