

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




vector<pair<int,char>>m;







int main()
{
    FASTIO;


    string s1 , s2 , s3;

    cin >> s1 >> s2 >> s3;

    m.pb(mp(0,'A'));

    m.pb(mp(0,'B'));

    m.pb(mp(0,'C'));




    if(s1[1]=='>')
    {
        for(int i=0; i<m.size(); i++)
        {
            if(m[i].second==s1[0])
            {
                m[i].first += 1;
                break;
            }
        }
    }
    else if(s1[1]=='<')
    {
        for(int i=0; i<m.size(); i++)
        {
            if(m[i].second==s1[2])
            {
                m[i].first += 1;
                break;
            }
        }
    }


    if(s2[1]=='>')
    {
        for(int i=0; i<m.size(); i++)
        {
            if(m[i].second==s2[0])
            {
                m[i].first += 1;
                break;
            }
        }
    }
    else if(s2[1] == '<')
    {
       for(int i=0; i<m.size(); i++)
        {
            if(m[i].second==s2[2])
            {
                m[i].first += 1;
                break;
            }
        }
    }


    if(s3[1] == '>')
    {
       for(int i=0; i<m.size(); i++)
        {
            if(m[i].second==s3[0])
            {
                m[i].first += 1;
                break;
            }
        }
    }
    else if(s3[1] == '<')
    {
        for(int i=0; i<m.size(); i++)
        {
            if(m[i].second==s3[2])
            {
                m[i].first += 1;
                break;
            }
        }
    }

    sort(m.begin(),m.end());




    //REV(m);

    string s4 = "";



    for(int i=0; i<m.size()-1; i++)
    {
        if(m[i].first == m[i+1].first)
        {
            cout << "Impossible" << endl;
            return 0;
        }

    }



    for(int i=0; i<m.size(); i++)
    {
        cout << m[i].second;

    }

    cout << endl;
















    return 0;
}
