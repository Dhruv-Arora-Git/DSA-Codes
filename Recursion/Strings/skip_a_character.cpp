#include <iostream>
#include <string>
using namespace std;

// Approach 1
void skip(string res, string original)
{
    if (original.empty())
    {
        cout << res << '\n';
        return;
    }
    char ch = original[0];

    if (ch != 'a')
        res.push_back(ch);

    skip(res, original.substr(1));
}

// Approach 2
string skip(string original)
{
    if (original.empty())
        return "";

    char ch = original[0];

    string res = skip(original.substr(1));

    if (ch != 'a')
        return (ch + res);
    // else
    return res;
}

string skipApple(string original)
{
    if (original.empty())
        return "";
    // int apple = original.find("apple");
    // cout << apple << '\n';
    if (original.find("apple") == 0)
        return skipApple(original.substr(5));

    return original[0] + skipApple(original.substr(1));
}

int main()
{
    cout << skip("bacacadaaaaart g haa") << "\n";
    cout << skipApple("bsapple apples") << '\n';
    return 0;
}