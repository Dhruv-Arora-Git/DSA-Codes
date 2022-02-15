#include <iostream>
using namespace std;

// asked in Amazon
int main()
{
    int n;
    cin >> n;
    int ans = 0;
    int base = 5;
    while (n > 0)
    {
        int last = n & 1;
        ans += last * base;
        n = n >> 1;
        base = base * 5;
    }

    cout << ans << '\n';

    return 0;
}