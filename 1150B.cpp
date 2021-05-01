#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    cin >> n;

    char patt[n][n];


    int mark[n][n];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> patt[i][j];
            mark[i][j]=0;
        }
    }


    for(int i=0; i<n; i++)
    {
        for(int j=0 ; j<n; j++)
        {
            if(patt[i][j-1]=='.' && patt[i][j]=='.' && patt[i][j+1]=='.' && patt[i-1][j]=='.' && patt[i+1][j]=='.' && j-1>=0 && j+1<n && i-1>=0 && i+1<n)
            {

                if(mark[i][j-1]==0 && mark[i][j]==0 && mark[i][j+1]==0 && mark[i-1][j]==0 && mark[i+1][j]==0 && j-1>=0 && j+1<n && i-1>=0 && i+1<n)
                {

                    mark[i][j-1]=1;
                    mark[i][j]=1;
                    mark[i][j+1]=1;
                    mark[i-1][j]=1;
                    mark[i+1][j]=1;

                    patt[i][j-1]='A';
                    patt[i][j] = 'A';
                    patt[i][j+1] = 'A';
                    patt[i-1][j] = 'A';
                    patt[i+1][j] = 'A';
                }
            }
        }
    }

    int f = 0;


    for(int i=0; i<n; i++)
    {
        if(f)
            break;

        for(int j=0; j<n; j++)
        {
            if(patt[i][j]=='.')
            {
                cout << "NO" << endl;
                f = 1;
                break;
            }
        }
    }

    if(f==0)
    {
        cout << "YES" << endl;
    }

    return 0;


}
