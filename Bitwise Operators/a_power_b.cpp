#include <iostream>
using namespace std;
// O(log n)
long long fastPower(long long base, long long power)
{
    long long ans = 1;
    while (base > 0)
    {
        if ((power & 1) == 1)
            ans *= base;

        base = base * base;
        power = power >> 1;
    }
    return ans;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << fastPower(a, b) << '\n';
    return 0;
}
