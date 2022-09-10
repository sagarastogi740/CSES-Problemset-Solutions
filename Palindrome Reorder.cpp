#include <bits/stdc++.h>
#define num(x) (int)((int)x - 65)
using namespace std;

int main()
{
    int n[26];
    int tag = 27;
    char str[1000001];
    int odd = 0;
    cin >> str;
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        (n[num(str[i])])++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (n[i] % 2)
        {
            odd++;
            tag = i;
        }
        else
        {
            n[i] /= 2;
        }
    }
    if (odd > 1)
    {
        cout << "NO SOLUTION" << '\n';
        return 0;
    }
    string out1, out2;
    for (int i = 0; i < 26; i++)
    {
        if (i == tag)
            continue;
        for (int j = 0; j < n[i]; j++)
            out1.push_back((char)(i + 65));
    }
    string::reverse_iterator itr;
    for (itr = out1.rbegin(); itr != out1.rend(); itr++)
    {
        out2.push_back(*itr);
    }
    if (len % 2)
    {
        cout << out1;
        for (int i = 0; i < n[tag]; i++)
            cout << (char)(tag + 65);
        cout << out2;
    }
    else
        cout << out1 + out2 << '\n';
    return 0;
}