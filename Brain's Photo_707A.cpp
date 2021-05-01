#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[105][105];

    int n,m,c=0,bw=0;

    cin>>n>>m;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>s[i][j];

            if(s[i][j]=='W' || s[i][j]=='B' || s[i][j]=='G')
            {
                bw++;
            }
            else
            {
                c++;
            }
        }
    }

    if(c==0)
    {
        cout<<"#Black&White"<<endl;
    }
    else
    {
        cout<<"#Color"<<endl;
    }

    return 0;

}
