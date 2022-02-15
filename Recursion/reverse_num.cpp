#include <iostream>
using namespace std;

int rev(int n)
{
    static int reverse = 0;

    if (n == 0)
        return reverse;

    reverse = reverse * 10 + (n % 10);

    return rev(n / 10);
}

int main()
{
    int n = 1;

    int ans = rev(n);
    cout << ans << '\n';
    return 0;
}