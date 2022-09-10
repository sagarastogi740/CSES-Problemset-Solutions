#include <bits/stdc++.h>

using namespace std;

int main()
{
    char ch[1000001];
    int length = 0, count = 1, max = 1;
    cin >> ch;
    length = strlen(ch);
    for (int i = 1; i < length; i++)
    {
        if (ch[i - 1] == ch[i])
            count++;
        else
            count = 1;
        if (max < count)
            max = count;
    }
    cout << max << endl;
    return 0;
}