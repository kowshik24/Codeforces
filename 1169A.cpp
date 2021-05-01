#include<bits/stdc++.h>

using namespace std;


int main()
{



    int x ,y , n , a , b, flag = 0;


    cin >> n >> a >> x >> b >> y;

    for(int i=a,j=b; ; i++,j--)
    {
        if(i==j)
        {
            flag=1;
            break;
        }
        if(i==x || j==y)
        {
            break;
        }
        if(i==n)
        {
            i=0;
        }
        if(j==1)
        {
            j=n+1;
        }

    }
    if(flag)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }






    return 0;
}
