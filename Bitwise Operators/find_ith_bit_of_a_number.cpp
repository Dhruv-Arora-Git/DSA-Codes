#include <iostream>
using namespace std;

int find_ith_bit(int n, int i)
{
    int mask = (1 << (i - 1));
    int res = n & mask;       // it will give number with only ith bit on, ex = 1000
    int bit = res >> (i - 1); // this will give that ith bit , ex = 1000 >> 3 = 1

    return bit;
}

int main()
{
    int n, i;
    cin >> n >> i;

    // here we are considering LSB to be 1,2,3,4
    //  // cout << ((n & (1 << (i - 1))) >> (i - 1)) << '\n';

    // if question considers LSB starts from 0,1,2,3,4,
    //  // cout << ((n & (1 << (i))) >> (i)) << '\n';
    cout << find_ith_bit(n, i) << '\n';
    return 0;
}