#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int k,n;
    cin>>n>>k;

    if(n%2==0)
    {
        if(n/2>=k)
        {
            int j=1;
            for(int i=1; i<=n ; i=i+2)
            {
                j++;
                if(j-1==k)
                {
                    cout<<i<<endl;
                    break;
                }
            }
        }
            else
            {
                int j=(n/2);
                for(int i=2; i<=n; i=i+2)
                {
                    j++;


                    if(j==k)
                    {
                        cout<<i<<endl;
                        break;
                    }
                }
            }
        }

    else
    {
        if((n/2)+1>=k)
        {
            int j=1;
            for(int i=1; i<=n; i=i+2)
            {
                j++;

                if(j-1==k)
                {
                    cout<<i<<endl;
                    break;
                }
            }
        }
        else
        {
            int j=(n/2)+1;
            for(int i=2; i<=n; i=i+2)
            {
                j++;
                if(j==k)
                {
                    cout<<i<<endl;
                    break;
                }
            }
        }
    }


    return 0;
}
