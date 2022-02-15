#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    cout << log2(n & -n) + 1 << '\n';
    return 0;
}