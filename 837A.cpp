#include<bits/stdc++.h>
using namespace std;
int n;
string s;

int main()
{
    cin >> n;
    int ans = 0;
    while (cin >> s)
    {
        int cnt = 0;
        for (int i = 0; i < s.size(); ++i)
            if (isupper(s[i]))
                ++cnt;
        ans = max(ans, cnt);
    }
    cout << ans << "\n";
    return 0;
}
