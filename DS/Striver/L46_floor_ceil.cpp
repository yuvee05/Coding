#include <bits/stdc++.h>
using namespace std;
int floor(int target, int arr[],int n)
{
    int ans=0;
    int low,high,mid;
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=low+(high-low)/2;
        if(arr[mid]>target)
            high=mid-1;
        else
        {
            ans=mid;
            low=mid+1;  
        }
    }
    return arr[ans];
}
int ceil(int target, int arr[],int n)
{
    int ans=n;
    int low,high,mid;
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=low+(high-low)/2;
        if(arr[mid]<target)
            low=mid+1;
        else
        {
            ans=mid;
            high=mid-1;  
        }
    }
    return arr[ans];
}
int main()
{
    int arr[] = {1,3,5,8,9};
    cout << floor(7,arr,5) << endl << ceil(7,arr,5) << endl;
    return 0;
}