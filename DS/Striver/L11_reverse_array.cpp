#include <bits/stdc++.h>
using namespace std;
void rev(int arr[], int n, int i)
{
    if(i>n)
        return;
    int temp=arr[i];
    arr[i]=arr[n];
    arr[n]=temp;
    rev(arr,n-1,i+1);
    
}
int main()
{
    
    int n;

    cout << "Enter no of elements" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements" << endl;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    rev(arr,n-1,0);
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}