
#include<bits/stdc++.h>
using namespace std;


/// File input & output /////
#define fRead(x)        freopen("x.txt","r",stdin)
#define fWrite(x)       freopen ("x.txt","w",stdout)


#define ld                long double
#define ll              long long
#define ull            unsigned long long
#define ff              first
#define ss              second
#define pb              push_back
#define INF             2e16
#define PI              acos(-1.0)
#define mk              make_pair
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

int main()
{
    FASTIO;

    int t;

    cin >> t;

    string st;



    for(int j=0; j<t; j++)
    {
        cin >> st;

        int len = st.length();


        bool flag = false;

        for(int i=len-1; i>=0; i--)
        {
            if(st[i]==st[i-1] && st[i]!='?')
            {
                cout << -1 << endl;
                flag = true;
                break;
            }
        }

        if(flag==false)
        {
            for(int k=0; k<len; k++)
            {

                if(k==0 && st[0]=='?')
                {
                    if(st[1]=='a')
                    {
                        st[0] = 'b';
                    }
                    else if(st[1]=='b')
                        st[0] = 'c';
                    else
                        st[0] = 'a';
                }

                if(st[k]=='?' && k>0)
                {
                    if(st[k-1]=='a')
                    {
                        if(st[k+1]=='b')
                        {
                            st[k] = 'c';
                        }
                        else if(st[k+1]=='c')
                        {
                            st[k] = 'b';
                        }
                        else
                            st[k] = 'b';
                    }
                    else if(st[k-1]=='b' && k>0)
                    {
                        if(st[k+1]=='a')
                        {
                            st[k] = 'c';
                        }
                        else if(st[k+1]=='c')
                        {
                            st[k] = 'a';
                        }
                        else
                            st[k] = 'a';
                    }
                    else if(st[k-1]=='c' && k>0)
                    {
                        if(st[k+1]=='a')
                        {
                            st[k] = 'b';
                        }
                        else if(st[k+1]=='b')
                        {
                            st[k] = 'a';
                        }
                        else
                            st[k] = 'a';
                    }
                }


            }

            cout << st << endl;

        }
    }








    return 0;
}
