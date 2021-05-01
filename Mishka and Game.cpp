#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,c,m1=0,c1=0;

    cin>>n;

    for(int i=0 ; i<n ; i++ )
    {
        cin>>m>>c;

        if(m>c)
        {
            m1++;
        }
        else if(c>m)
        {
            c1++;
        }
    }

    if(m1>c1)
    {
        cout<<"Mishka"<<endl;
    }
    else if(c1>m1)
    {
        cout<<"Chris"<<endl;
    }
    else
    {
        cout<<"Friendship is magic!^^"<<endl;
    }

    return 0;
}
