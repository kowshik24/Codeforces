#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0,sum=0,m;
    cin>>n;
        for(int i=1; ; i++)
        {
            m=(i*(i+1))/2;
            sum=sum+m;
            cout<<sum<<endl;
            if(sum>n)
            {
                break;
            }
            else
            {
                count++;
            }
        }
        if(count>1)
        {
        cout<<count<<endl;
        }

        else
        {
            cout<<1<<endl;
        }

        return 0;
}
