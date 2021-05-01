/** Seek God..Trust God..Praise God..**/

#include<bits/stdc++.h>
using namespace std;


#define fRead(x)        freopen("x.txt","r",stdin)
#define fWrite(x)       freopen ("x.txt","w",stdout)

#define mt              make_tuple
#define ld              long double
#define ll              long long
#define ull             unsigned long long
#define ff              first
#define ss              second
#define pb              push_back
#define INF             2e16
#define PI              acos(-1.0)
#define mp              make_pair
#define pii             pair<int,int>
#define pll             pair<LL,LL>
#define endl            "\n";

#define min3(a,b,c)     min(a,min(b,c))
#define max3(a,b,c)     max(a,max(b,c))
#define min4(a,b,c,d)   min(a,min(b,min(c,d)))
#define max4(a,b,c,d)   max(a,max(b,max(c,d)))
#define SQR(a)          ((a)*(a))
#define FOR(i,a,b)      for(int i=a;i<=b;i++)
#define ROF(i,a,b)      for(int i=a;i>=b;i--)
#define REP(i,b)        for(int i=0;i<b;i++)
#define MEM(a,x)        memset(a,x,sizeof(a))
#define ABS(x)          ((x)<0?-(x):(x))

#define SORT(v)         sort(v.begin(),v.end())
#define REV(v)          reverse(v.begin(),v.end())


#define FASTIO        ios_base::sync_with_stdio(0);cin.tie(nullptr);




///..................Sort by second element in a pair in decending order............. ///
bool SortbySecDesc(const pair<long long,long long > &a, const pair<long long,long long > &b)
{
    return a.second>b.second;
}

///.........................first element of pair in descending order..........................//////
bool sortinrev(const pair<int,int> &a,
               const pair<int,int> &b)
{
       return (a.first > b.first);
}



///.............................................................TEMPLATE................................................./////



/*
long long  Prime[3000000],nPrime;
long long  mark[10000002];

void seive(long long int n)
{
	long long int i,j,limit=sqrt(n*1.0)+2;
	mark[1]=1;
	for(i=4; i<=n ;i+=2)
	mark[i]=1;
	Prime[nPrime++]=2;
	for(i=3; i<=n; i+=2)
	{
		if(!mark[i])
		{
			Prime[nPrime++]=i;
			if(i<=limit)
			{
				for(j=i*i; j<=n ;j+=i*2)
				{
					mark[j]=1;
				}
			}
		}
	}
}
*/


int main()
{
    FASTIO;

    ll n , m , k;

    cin >> n >> m >> k;

    int a[n+1];


    for(int i=1; i<=n; i++)
    {
        cin >> a[i];
    }



    int ans = 0;


    if(m==1)
    {
        for(int i=2; i<=n; i++)
        {
            if(a[i]!=0 && a[i]<=k)
            {
                ans += ((i-1)*10);
                break;
            }
        }

        cout << ans << endl;
        return 0;



    }

    if(m==n)
    {
        for(int i=n-1; i>=1; i--)
        {
            if(a[i]!=0 && a[i]<=k)
            {
                ans += 10;
                break;
            }
            else
            {
                ans += 10;

            }
        }

        cout << ans << endl;
        return 0;

    }


    int f1 = 0;

    for(int i=m-1; i>=1; i--)
    {
        if(a[i]!=0 && a[i]<=k)
        {
            ans += 10;
            f1 = 1;
            break;
        }
        else
        {
            ans += 10;
        }
    }

    if(f1==0)
    {
        ans = INT_MAX;

    }

    int ans1 = 0;

    int f = 0;



    for(int i=m+1; i<=n; i++)
    {
        if(a[i]!=0 && a[i]<=k)
        {
            ans1 += 10;
            f = 1;
            break;
        }
        else
        {
            ans1 += 10;
        }
    }

    if(f==0)
    {
         ans1 = INT_MAX;
    }

    if(ans1!=0 && ans!=0)
    {

        //cout << "sdfsdf " << endl;

        cout << min(ans,ans1) << endl;
        return 0;
    }


    if(ans1==0)
    {
        cout << ans << endl;
        return 0;
    }


    if(ans==0)
    {
        cout << ans1 << endl;
        return 0;
    }


    cout << min(ans,ans1) << endl;






    return 0;
}
