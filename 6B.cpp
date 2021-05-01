#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n, m ;
    char c;

    cin >> n >> m >> c;


    char ar[n+5][m+5];

   for(int i = 0; i <= n + 1; i++) fill(ar[i], ar[i] + m + 5, '.');




    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cin >> ar[i][j];
        }
    }

    set<char>s;



    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            if(ar[i][j]==c)
            {
                if(ar[i+1][j]!='.' && ar[i+1][j]!=c)
                {
                    s.insert(ar[i+1][j]);
                }
                if(ar[i-1][j]!='.' && ar[i-1][j]!=c)
                {
                    s.insert(ar[i-1][j]);
                }

                if(ar[i][j+1]!='.' && ar[i][j+1]!=c)
                {
                    s.insert(ar[i][j+1]);
                }

                if(ar[i][j-1]!='.' && ar[i][j-1]!=c)
                {
                    s.insert(ar[i][j-1]);
                }
            }
        }
    }

    cout << s.size() << endl;


    return 0;

}
