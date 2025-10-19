#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int firstOccurence(vector<int> &nums, int target, int n)
    {
        int high = n - 1, low = 0, mid, first = -1;
        while (low <= high)
        {
            mid = low + (high - low) / 2;
            if (nums[mid] > target)
                high = mid - 1;
            else if (nums[mid] < target)
                low = mid + 1;
            else
            {
                first = mid;
                high = mid - 1;
            }
        }
        return first;
    }
    int lastOccurence(vector<int> &nums, int target, int n)
    {
        int high = n - 1, low = 0, mid, last = -1;
        while (low <= high)
        {
            mid = low + (high - low) / 2;
            if (nums[mid] > target)
                high = mid - 1;
            else if (nums[mid] < target)
                low = mid + 1;
            else
            {
                last = mid;
                low = mid + 1;
            }
        }
        return last;
    }
    int noOfOccurrences(vector<int> &nums, int target)
    {
        int f = firstOccurence(nums, target, nums.size());
        if (f == -1)
            return 0;
        return (lastOccurence(nums, target, nums.size())-f+1);
    }
};
int main()
{
    Solution x;
    vector<int> arr = {1,2,2,3,3,3,4,6,7,7};
    cout << x.noOfOccurrences(arr,8);
    return 0;
}