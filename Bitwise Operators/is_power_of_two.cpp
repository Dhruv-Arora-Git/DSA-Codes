#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    if (n == 0) // exception case
        cout << false << '\n';
    else
        cout << ((n & (n - 1)) == 0) << '\n';
    return 0;
}