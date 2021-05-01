#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[6][6];

    int n=0,m=0;

    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=5; j++)
        {
        cin>>a[i][j];
        if(a[i][j]==1)
        {
            n=i;
            m=j;
        }

        }
    }

    cout<<abs(3-n)+abs(3-m)<<endl;

    return 0;
}
