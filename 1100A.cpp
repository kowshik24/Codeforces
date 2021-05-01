#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,neg=0,pos=0,minimum,p=0;

    int a[105];

    cin >> n >> k;

    for(int i=0; i<n; i++)
    {
        cin >> a[i];

        if(a[i]==-1)
        {
            neg++;
        }
        else
        {
            pos++;
        }
    }

    for(int i=1; i<=n; i++)
    {
        int post=pos;
        int negt=neg;

        for(int j=i;j<=n; j=j+k)
        {
            if(a[j]==-1)
            {
                negt--;
            }
            else if(a[j]==1)
            {
                post--;
            }
        }

        int p = max(p,abs(negt-post));
    }

    cout << p << endl;

    return 0;
}
