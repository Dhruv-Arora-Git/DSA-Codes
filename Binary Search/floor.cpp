#include <iostream>
#include <vector>

using namespace std;

int floor(vector<int> &arr, int target)
{
    int start = 0;
    int end = arr.size();

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            start = mid + 1;
        else if (arr[mid] > target)
            end = mid - 1;
    }
    return end;
}

int main()
{
    vector<int> arr = {2, 3, 5, 9, 14, 16, 18};
    int target = 4;
    cout << "Index of Floor of target is : " << floor(arr, target) << '\n';
    return 0;
}