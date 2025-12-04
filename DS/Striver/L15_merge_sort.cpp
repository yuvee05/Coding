#include <iostream>
using namespace std;
void merge(int arr[],int start,int mid,int end)
{
    int temp[end-start+1];
    int left=start,right=mid+1,i=0;
    while(left<=mid && right<=end)
    {
        if(arr[left]<=arr[right])
            temp[i++]=arr[left++];
        else
            temp[i++]=arr[right++];
    }
    while(left<=mid)
    {
        temp[i++]=arr[left++];
    }
    while(right<=end)
    {
        temp[i++]=arr[right++];
    }
    for(int j=0;j<i;j++)
    {
        arr[start++]=temp[j];
    }
}
void mergesort(int arr[],int start,int end)
{
    if(start>=end)
        return;
    int mid = (start+end)/2;
    mergesort(arr,start,mid);
    mergesort(arr,mid+1,end);
    merge(arr,start,mid,end);
}
int main()
{
    int size;
    cout << "Enter size of array: " ;
    cin >> size;
    int arr[size];
    cout << "Enter " << size << " elements " << endl;\
    for(int i=0;i<size;i++)
    {
        cin >> arr[i];
    }
    mergesort(arr,0,size-1);
    cout << "Sorted array: ";
    for(int i=0;i<size;i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}