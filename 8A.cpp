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


    string s, s1,s2;


    cin >> s >> s1 >> s2;



    bool f = 0, b = 0;

    string t = s;




    for(int i=0; i+s1.size()<=s.size(); i++)
    {
        if(s.substr(i,s1.size())==s1)
        {
            s.erase(0,i+s1.size());

            f = 1;

            break;
        }

    }

    //cout << s << endl;


    for(int i=0; i+s2.size()<=s.size(); i++)
    {

        //cout << s << endl;

        if(s.substr(i,s2.size())==s2)
        {

            //cout << s << endl;
            b = 1;
            s.erase(0,i+s2.size());
            break;
        }

    }


    // cout << s << endl;


    if(f && b)
    {

        reverse(t.begin(),t.end());

        bool f1 = 0, b1 = 0;



        for(int i=0; i+s1.size()<=t.size(); i++)
        {
            if(t.substr(i,s1.size())==s1)
            {
                t.erase(0,i+s1.size());

                f1 = 1;

                break;
            }

        }

        // cout << s << endl;


        for(int i=0; i+s2.size()<=t.size(); i++)
        {

            //cout << s << endl;

            if(t.substr(i,s2.size())==s2)
            {

                //cout << s << endl;
                b1 = 1;

                t.erase(0,i+s2.size());
                break;
            }

        }

        if(f1 && b1)
        {
            cout << "both" << endl;
            return 0;
        }
        else if(f1)
        {
            cout << "forward" << endl;
            return 0;
        }
        else
        {
            cout << "fantasy" << endl;
            return 0;
        }



    }
    else
    {
        reverse(t.begin(),t.end());

        bool f2 = 0 , b2 = 0;



        for(int i=0; i+s1.size()<=t.size(); i++)
        {
            if(t.substr(i,s1.size())==s1)
            {
                t.erase(0,i+s1.size());

                f2 = 1;

                break;
            }

        }

        //cout << s << endl;


        for(int i=0; i+s2.size()<=t.size(); i++)
        {

            //cout << s << endl;

            if(t.substr(i,s2.size())==s2)
            {

                //cout << s << endl;
                b2 = 1;
                t.erase(0,i+s2.size());
                break;
            }

        }

        if(f2 && b2)
        {

            cout << "backward" << endl;
            return 0;

        }
        else if(b2)
        {
            cout << "forward" << endl;
            return 0;
        }
        else
        {
            cout << "fantasy" << endl;
            return 0;
        }


    }






    return 0;
}

