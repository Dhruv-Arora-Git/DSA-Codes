#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> arr, int target, int start, int end)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            start = mid + 1;
        else if (arr[mid > target])
            end = mid - 1;
    }
    return -1;
}

int finding_range(vector<int> arr, int target)
{
    // first steart with a box of size 2
    int start = 0;
    int end = 1;

    // condition for the target to lie in the range
    while (target > arr[end])
    {
        // double the box size
        int newStart = end + 1; // temp value to store, and update after updating the formula

        // end = end + 2 * box size (end - start + 1)
        end += 2 * (end - start + 1);
        start = newStart;
    }

    return binarySearch(arr, target, start, end);
}

int main()
{
    vector<int> arr = {3, 5, 7, 9, 10, 90, 100, 130, 140, 160, 170};
    int target = 90;

    cout << finding_range(arr, target) << '\n';
    return 0;
}