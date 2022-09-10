#include <bits/stdc++.h>
#define TOINT(x) (x - (int)'a')
#define TOCHAR(x) ((char)(x + (int)'a'))
using namespace std;

int factorial(int n)
{
    return (n == 1 || n == 0) ? 1 : n * factorial(n - 1);
}

void print(vector<int> arr, string s, int len)
{
    vector<int> v;
    if (len == 0)
    {
        cout << s << '\n';
        return;
    }
    for (int i = 0; i < 26; i++)
    {
        v = arr;
        if (v[i] > 0)
        {
            v[i]--;
            print(v, s + TOCHAR(i), len - 1);
        }
    }
}

int main()
{
    int sum = 0;
    vector<int> data(26);
    char str[9];
    cin >> str;
    int i, len = strlen(str);
    for (i = 0; i < len; i++)
        data[TOINT(str[i])]++;
    sum = factorial(len);
    for (i = 0; i < len; i++)
    {
        if (data[i] > 0)
            sum /= factorial(data[i]);
    }
    cout << sum << '\n';
    print(data, "", len);
    return 0;
}