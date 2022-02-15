#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int n, b;
    cin >> n >> b;
    int ans = (log(n) / log(b)) + 1;
    cout << ans << '\n';
    // cout << (int)(log(n) / log(b)) + 1 << '\n';
    return 0;
}