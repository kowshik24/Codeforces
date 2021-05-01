#include<bits/stdc++.h>
using namespace std;


#define pri(n)          printf("%d\n",n)
#define prll(n)         printf("%lld\n",n)
#define prd(n)          printf("%lf\n",n)
#define scll(n)         scanf("%lld",&n)
#define sci(n)          scanf("%d",&n)
#define scd(n)          scanf("%lf",&n)
#define pi              acos(-1)
#define ll              long long
#define pb              push_back
#define vsort(v)        sort(v.begin(),v.end())
#define asort(n)        sort(ar,ar+n)
#define for1(i,n)       for(i=1;i<=n;++i)
#define for0(i,n)       for(i=0;i<n;++i)
#define mod             1000000007


int main(){


int t;
    ll a , b;



    cin >> t;

    for(int i=0; i<t; i++)
    {
        cin >> a >> b;
        if((a+b)%3==0)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }

    return 0;




}
