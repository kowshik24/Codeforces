#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,a,b,alex=0,dima=0;

    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>a>>b;

        if(b>=a)
        {
            alex++;
        }
        else
        {
            dima++;
        }
    }

    if(alex>=dima)
    {
        cout<<"Happy Alex"<<endl;
    }
    else
    {
        cout<<"Poor Alex"<<endl;
    }

    return 0;

}
