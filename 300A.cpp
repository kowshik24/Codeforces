

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
#define stop            return 0;


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

    int n;

    cin >> n;

    ll a;

    vector<int>v,v1,v2;




    for(int i=0; i<n; i++)
    {
        cin >> a;

        if(a==0)
        {
            v2.pb(0);
        }
        else if(a<0)
        {
            v.pb(a);
        }
        else
        {
            v1.pb(a);
        }
    }

   // cout << v.size() << " " << v1.size() << " " << v2.size() << endl;


    if(v1.size()==0)
    {

        if(v.size()%2==1)
        {

            cout << 1 << " " << v[0] << endl;

            cout << 2 << " ";

            for(int i=1; i<3; i++)
                cout << v[i] << " ";

            cout << endl;


            cout << (v.size()-3)+v2.size() << " ";

            for(int i=3; i<v.size(); i++)
                cout << v[i] << " ";

            for(auto i:v2)
                cout << i << " ";

            cout << endl;

            return 0;

        }
        else
        {
            cout << v.size()-3 << " ";

            for(int i=0; i<v.size()-3; i++)
                cout << v[i] << " ";

            cout << endl;


            cout << 2 << " ";

            cout << v[v.size()-3] << " " << v[v.size()-2] << endl;


            cout << v2.size()+1 << " ";

            cout << v[v.size()-1] << " ";

            for(auto it:v2)
                cout << it << " ";

            cout << endl;
            stop;

        }








    }

    if(v.size()%2==0)
    {
        cout << v.size()-1 << " ";

        for(int i=0; i<v.size()-1; i++)
            cout << v[i] << " ";
        cout << endl;


        cout << v1.size() << " ";

        for(int i=0; i<v1.size(); i++)
            cout << v1[i] << " ";

        cout << endl;


        cout << v2.size()+1 << " ";

        cout << v[v.size()-1] << " ";


        for(int i=0; i<v2.size(); i++)
            cout << v2[i] << " ";

        cout << endl;

        return 0;

    }
    else
    {

        cout << v.size() << " ";

        for(int i=0; i<v.size(); i++)
            cout << v[i] << " ";
        cout << endl;


        cout << v1.size() << " ";

        for(int i=0; i<v1.size(); i++)
            cout << v1[i] << " ";

        cout << endl;


        cout << v2.size() << " ";



        for(int i=0; i<v2.size(); i++)
            cout << v2[i] << " ";

        cout << endl;

        return 0;


    }





    return 0;
}
