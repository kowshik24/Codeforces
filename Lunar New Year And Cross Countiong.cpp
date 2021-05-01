#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    char s[505][505];

    cin >> n;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cin >> s[i][j];
        }
    }

    int count =0;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(s[i+1][j+1]=='X' && s[i-1][j-1]=='X' && s[i-1][j+1]=='X' && s[i+1][j-1]=='X' && s[i][j]=='X')
            {
                count++;

            }
        }
    }

    cout << count << endl;

    return 0;
}
