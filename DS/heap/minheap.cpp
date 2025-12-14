#include <iostream>
using namespace std;
class heap
{
    public:
    int arr[100];
    int size=0;

    void insert(int val)
    {
        size=size+1;
        int index=size;
        arr[index]=val;

        while(index>1)
        {
            int parent = index/2;
            if(arr[parent]>arr[index])
            {
                swap(arr[parent],arr[index]);
                index=parent;
            }
            else
                return;
        }

    }

    void deleteroot()
    {
        if(size==0)
        {
            cout << "Nothing to delete" << endl;
            return;
        }
        arr[1]=arr[size];
        size--;
        int index=1;
        while(true)
        {
            int leftIndex = 2*index;
            int rightIndex = 2*index + 1;

            if(leftIndex <= size && arr[leftIndex]<arr[index])
            {
                swap(arr[leftIndex],arr[index]);
                index=leftIndex;
            }
            else if(rightIndex <= size && arr[rightIndex]<arr[index])
            {
                swap(arr[rightIndex],arr[index]);
                index=rightIndex;
            }
            else
                return;
        }
    }

    void heapify(int arr[], int n, int i)
    {
        int smallest = i;
        int right = 2*i + 1;
        int left = 2*i;

        if(right <= n && arr[right] < arr[smallest])
        {
            smallest = right;
        }
        if(left <= n && arr[left] < arr[smallest])
        {
            smallest = left;
        }

        if(smallest!=i)
        {
            swap(arr[smallest],arr[i]);
            heapify(arr, n, smallest);
        }
    }

    void display()
    {
        for(int i=1;i<=size;i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
};
int main()
{
    heap a;
    a.insert(20);
    a.insert(30);
    a.insert(4);
    a.insert(8);
    a.insert(100);
    a.insert(2);
    a.insert(89);
    a.insert(6);

    a.display();

    a.deleteroot();

    a.display();

    int arr[6] = {-1,54,53,55,52,50};
    int n=5;
    for(int i = n/2; i>0;i--)
    {
        a.heapify(arr, n, i);
    }
    for(int i=1;i<=n;i++)
    {
        cout << arr[i] << " ";
    }

    return 0;

}