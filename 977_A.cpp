#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,t;

    cin>>a>>t;

    while(t!=0)
    {
        if(a%10==0)
        {
            a=a/10;
            //cout<<a<<endl;
            t--;
        }
        else
        {
            a=a-1;
            //cout<<a<<endl;
            t--;
        }
    }

    cout<<a<<endl;


    return 0;
}
