#include <iostream>
#include <vector>

using namespace std;

int ceiling(vector<int> &arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;

    if (target > arr[end]) // if there is no elements >= target in the array
        return -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
            return mid; // element is found
        else if (arr[mid] > target)
            end = mid - 1;
        else if (arr[mid] < target)
            start = mid + 1;
    }

    return start; // after loop ends (start > end) and target is not found, so , start will hold the smallest greater element that target
}

int main()
{
    vector<int> arr = {2, 3, 5, 9, 14, 16, 18};
    int target = 19;

    cout << "Index of Ceiling of target is : "
         << ceiling(arr, target) << '\n';
    return 0;
}