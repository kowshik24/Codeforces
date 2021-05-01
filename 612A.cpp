
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
    ll n , p , q;

    cin >> n >> p >> q;


    string s;

    cin >> s;

//
//    if(p==1 || q==1)
//    {
//        cout << n << endl;
//
//        for(int i=0; i<n; i++)
//        {
//            cout << s[i] << endl;
//        }
//
//        return 0;
//    }


    if(n%p==0)
    {

        cout << n/p << endl;

        for(int i=0; i<n; i+=p)
        {


            string s1 = s.substr(i,p);

            cout << s1 << endl;

        }

        return 0;
    }
    else if(n%q==0)
    {

        cout << n/q << endl;

        for(int i=0; i<n; i+=q)
        {

            string s1 = s.substr(i,q);

            //cout << i << " " << i+q << endl;

            cout << s1 << endl;
        }

        return 0;

    }

    else
    {

        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                int ans = (i*p) + (j*q);
                if(ans==n)
                {
                    cout << i+j << endl;

                    int k = 0;

                    while(i!=0)
                    {
                        string s2 = s.substr(k,p);

                        cout << s2 << endl;
                        k+=p;
                        i--;
                    }

                    while(j!=0)
                    {
                        string s3 = s.substr(k,q);
                        cout << s3 << endl;
                        k+=q;
                        j--;
                    }

                    return 0;

                }
            }
        }


        cout << -1 << endl;
    }







    return 0;
}
