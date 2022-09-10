#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, temp, m, count = 0;
    cin >> n;
    while (n)
    {
        m = 0;
        temp = n;
        while (temp)
        {
            if (temp % 10 > m)
                m = temp % 10;
            temp /= 10;
        }
        n -= m;
        count++;
    }
    cout << count << endl;
    return 0;
}