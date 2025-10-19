#include <bits/stdc++.h>
using namespace std;
int lowerbound(int target, int arr[],int n)
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
    return ans;
}
int main()
{
    int arr[]={2,3,4,6,8,8,9};
    cout << lowerbound(10,arr,7);
    return 0;
}