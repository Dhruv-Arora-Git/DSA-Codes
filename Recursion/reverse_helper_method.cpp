#include <iostream>
#include <math.h>
using namespace std;

int helper(int n, int digits)
{
    if (n % 10 == n)
        return n;

    int rem = n % 10;

    return rem * (int)pow(10, digits - 1) + helper(n / 10, digits - 1);
}

int rev2(int n)
{
    int digits = (int)log10(n) + 1;
    return helper(n, digits);
}

int main()
{
    int n = 1234;
    int ans = rev2(n);
    cout << ans << '\n';

    return 0;
}