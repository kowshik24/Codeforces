#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,stock=0,count=0;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>m;

        if(m==-1)
        {
            stock=stock-1;
            if(stock<0)
            {
                count++;
                stock=0;
            }
        }
        else
        {
            stock=stock+m;
        }
    }


    cout<<count<<endl;

    return 0;
}
