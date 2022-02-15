#include <iostream>

using namespace std;
int countSetBits(int n)
{
    int count = 0;

    while (n > 0)
    {
        count++;
        // n = n - (n & -n);
        // OR
        n = n & (n - 1);
    }
    return count;
}
int main()
{
    int n;
    cin >> n;
    // cout << __builtin_popcount(n) << endl; // inbuilt method
    cout << countSetBits(n) << '\n';
    return 0;
}