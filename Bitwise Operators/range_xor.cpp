#include <iostream>
using namespace std;

int xorFrom0toN(int n)
{
    int n_mod_4 = n % 4;

    if (n_mod_4 == 0)
        return n;
    else if (n_mod_4 == 1)
        return 1;
    else if (n_mod_4 == 2)
        return n + 1;
    else if (n_mod_4 == 3)
        return 0;

    return 0; // just to shut the compiler warning, we can ignore last check and return 0 directly, but this is more readable
}

int main()
{
    int a, b;
    cin >> a >> b;
    // range xor for a,b = xor(0,b) ^ xor(0,a-1)
    // xor(0,a-1) was extra, so to delete it, we xored that again
    // as, a ^ a = 0
    int ans = xorFrom0toN(b) ^ xorFrom0toN(a - 1);
    cout << ans << '\n';

    // cout << xorFrom0toN(a) << '\n';
    return 0;
}