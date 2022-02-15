#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int> &arr, int index)
{
    if (index == arr.size() - 1)
        return true;

    return arr[index] <= arr[index + 1] && isSorted(arr, ++index);
}

int main()
{
    vector<int> arr = {1, 2, 4, 8, 8, 9, 12};
    cout << isSorted(arr, 0) << '\n';
    return 0;
}