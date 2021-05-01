#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    int a[1001],b[1001];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i]>>b[i];

        if(b[i]-a[i]>=2)
        {
            count++;
        }
    }

    cout<<count<<endl;
    return 0;
}
