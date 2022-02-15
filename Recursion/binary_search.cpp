#include <iostream>
#include <vector>

using namespace std;

int search(vector<int> &arr, int target, int start, int end)
{
    if (start > end)
        return -1; // element not found
    int mid = start + (end - start) / 2;

    if (arr[mid] == target)
        return mid; // ans

    if (target > arr[mid])
        return search(arr, target, mid + 1, end); // start = mid + 1;

    // else if(target < arr[mid])
    return search(arr, target, start, mid - 1); // end = mid - 1;
}

int main()
{
    vector<int> v = {1, 2, 3, 55, 67, 78};
    int target = 66;
    int res = search(v, target, 0, v.size() - 1);

    cout << res << '\n';

    return 0;
}