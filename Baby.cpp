
/** Seek God..Trust God..Praise God..**/

#include<bits/stdc++.h>
using namespace std;



#define ll    long long
#define pb push_back

#define all(a) a.begin(),a.end()

ll a[123456];
ll pre[123456],suf[123456];
int main()
{

    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        int i;
        vector<ll>vec;

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            vec.pb(a[i]);
        }
        sort(vec.begin(),vec.end());

        vec.resize(unique(all(vec))-vec.begin());

        if(vec.size()==1)
        {
            cout<<vec[0]*2<<endl;
            continue;
        }
        n=vec.size();
        pre[0]=vec[0];
        for(int i=1 ;i<n; i++)
        {
            pre[i]=__gcd(pre[i-1],vec[i]);
        }
        suf[n-1]=vec[n-1];
        for(int i=n-2;i>=0;i--)
        {
            suf[i]=__gcd(suf[i+1],vec[i]);
        }
        ll ans=max(vec[0]+suf[1],pre[n-2]+vec[n-1]);
        for(int i=1 ; i<n-1;i++)
        {
            ans=max(ans,vec[i]+__gcd(suf[i+1],pre[i-1]));
        }
        cout<<ans<<endl;
    }
    return 0;
}
