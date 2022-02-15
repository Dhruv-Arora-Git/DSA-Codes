#include <iostream>
using namespace std;

int helper(int n, int count)
{
    if (n == 0)
        return count;

    if (n % 10 == 0)
        return helper(n / 10, ++count);

    return helper(n / 10, count);
}

int countZeroes(int n)
{
    if (n == 0)
        return 1;

    return helper(n, 0);
}

int main()
{
    int n = 0;
    int ans = countZeroes(n);
    cout << ans << '\n';
    return 0;
}