
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







bool isSubSequence(string str1, string str2, int m, int n)
{

    if (m == 0)
        return true;
    if (n == 0)
        return false;


    if (str1[m-1] == str2[n-1])
        return isSubSequence(str1, str2, m-1, n-1);


    return isSubSequence(str1, str2, m, n-1);
}

int main()
{
    FASTIO;

    ll t;

    cin >> t;


    while(t--)
    {

        string st;

        ll n, q;

        cin >> n >> q;


        cin >> st;

        ll l[q+1], r[q+1];




        for(int i=0; i<q; i++)
        {

            cin >> l[i] >> r[i];

        }


        for(int i=0; i<q; i++)
        {
            int low = l[i], hi = r[i];


            string str;



            for(int j=low-1; j<=hi-1; j++)
            {
                str.pb(st[j]);
            }


            int len = str.size();

            int f = 0;


            for(int l=low-1; l<=hi-1; l++)
            {
                string s2;


                for(int k=0; k<n; k++)
                {
                    if(k==l)
                        continue;
                    else
                    {
                        s2.pb(st[k]);
                    }
                }


                int len1 = s2.size();


                //cout << s2 << endl;



               int ans = isSubSequence(str,s2,len,len1);

               s2.clear();


                if(ans && len>=2)
                {
                    cout << "YES" << endl;
                     f=1;
                    break;
                }
            }

            if(f==0)
            {
                cout << "NO" << endl;
            }

            str.clear();

        }


}





return 0;
}

