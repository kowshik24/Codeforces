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


int main()
{

    ll t, n, sum;
    cin >> t;

    while(t--)
    {
        cin >> n >> sum;

        if(n==1)
        {
            cout << sum * sum << endl;
        }
        else if(sum==1)
        {
            cout << 1 << endl;
        }
        else if(sum%n==0)
        {
            ll ans4 = 0;

            ll divi4 = sum/n;

            for(int i=1; i<=n; i++)
                ans4 += divi4*divi4;

            cout << ans4 << endl;
        }
        else
        {
            if(sum%2==0 && n%2==0)
            {
                ll div = ceil(sum*1.00/n);

                ll div1 = div-1;

                ll sum1 = 0, sum2 = 0;


                for(int i=1; i<=n/2; i++)
                {


                    sum1 += div*div;
                    sum2 += div1 * div1;
                }

                cout << sum1+sum2 << endl;

            }

            else
            {
                ll ans = ceil(sum*1.000/n);


                ll ans1 = ans-1;

                ll sum5 = 0;


                for(int i=1; i<=n-1; i++)
                    sum5 += ans1 * ans1;

                cout << sum5 + (ans*ans) << endl;


            }
        }
    }






}
