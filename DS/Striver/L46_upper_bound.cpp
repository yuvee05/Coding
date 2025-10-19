#include <bits/stdc++.h>
using namespace std;
int upperbound(int target, int arr[],int n)
{
    int ans=0;
    int low,high,mid;
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=low+(high-low)/2;
        if(arr[mid]>=target)
            high=mid-1;
        else
        {
            ans=mid;
            low=mid+1;  
        }
    }
    return ans;
}
int main()
{
    int arr[]={2,3,4,6,8,8,9};
    cout << upperbound(2,arr,7);
    return 0;
}