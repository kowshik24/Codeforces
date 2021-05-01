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


//#define FASTIO        ios_base::sync_with_stdio(0);cin.tie(nullptr);




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






/// Convert String to Int ////

int String_to_int(string s)
{

    stringstream geek(s);

    int ans = 0;

    geek >> ans;


    return ans;
}

/// string to int ///
int S_I(string s)
{

    return stoi(s);
}

/*
/// int to string ///
string I_S(int n)
{
    return atoi(n);
}
*/




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

    int n;

    cin >> n;


        int odd = 0 , even = 0;

        vector<int>v1,v2;

        int a[n+2];


    for(int i=0; i<n; i++)
    {
        cin >> a[i];

        if(a[i]&1)
        {
            odd++;
            v1.pb(a[i]);
        }
        else{

           even++;
           v2.pb(a[i]);
        }
    }

    if((odd==0 && even>0) || (even==0 && odd>0))
    {

        int sum1 = 0;

        if(odd==0)
        {
            sort(v2.begin(),v2.end(),greater<int>());

            for(int i=1; i<v2.size(); i++)
            {
                sum1 += v2[i];
            }

            cout << sum1 << endl;
            return 0;

        }
        else
        {

            sort(v1.begin(),v1.end(),greater<int>());

            for(int i=1; i<v1.size(); i++)
            {
                sum1 += v1[i];
            }

            cout << sum1 << endl;
            return 0;

        }
    }

    if((odd==even) || (odd+1==even) || (even+1==odd))
    {
        cout << 0 << endl;
        return 0;
    }


    sort(a,a+n);


    if(odd>even)
    {
        sort(v1.begin(),v1.end());

        int baki = odd - even;

        int sum1 =0;

        for(int i=0; i<baki-1; i++)
        {
            sum1 += v1[i];
        }

        cout << sum1 << endl;
        return 0;



    }
    else
    {
        sort(v2.begin(),v2.end());

        int baki = even-odd;

        int sum1 =0;

        for(int i=0; i<baki-1; i++)
        {
            sum1 += v2[i];
        }

        cout << sum1 << endl;
        return 0;
    }








    return 0;
}
