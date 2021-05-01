#include<bits/stdc++.h>
using namespace std;


/// File input & output /////
#define fRead(x)        freopen("x.txt","r",stdin)
#define fWrite(x)       freopen ("x.txt","w",stdout)


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

int main()
{
    FASTIO;

    string st;


    cin >> st;



    int use_name = 0;

    for(int i=0; i<st.length(); i++)
    {
        if(st[i]=='@')
        {
            break;
        }
        else if((st[i]>='a' && st[i]<='z') || (st[i]>='A' && st[i]<='Z') ||(st[i]>='1' && st[i]<='9') || st[i]=='_')
        {
            use_name++;
        }
        else
        {
            break;
        }
    }

    if(use_name>=1 && use_name<=16)
    {

        for(int i=0; i<st.length(); i++)
        {
            if(st[i]=='@')
            {
                int hst_name = 0;
                int host = 0;

                bool flag  = 1;

                for(int j=i+1; j<st.length() ; j++)
                {

                    if(st[i]=='/')
                    {
                        flag = 0;
                        break;
                    }
                    else if(st[i]=='.')
                    {
                        host++;

                        if(hst_name>=1 && hst_name<=16)
                        {
                            hst_name = 0;
                        }
                        else
                        {
                            cout << "NO" << endl;
                            return 0;
                        }
                    }
                    else if((st[i]>='a' && st[i]<='z') || (st[i]>='A' && st[i]<='Z') ||(st[i]>='1' && st[i]<='9') || st[i]=='_')
                    {
                        hst_name++;
                        host++;
                    }

                }

                if((host>=1 && host<=32) && flag)
                {
                    cout << "YES" << endl;
                    return 0;
                }
                else if(!(host>=1 && host<=32))
                {
                    cout << "NO" << endl;
                    return 0;
                }

            }
        }


        for(int i=0; i<st.length(); i++)
        {
            if(st[i]=='/')
            {
                int res = 0;

                for(int j=i+1; j<st.length(); j++)
                {
                    if((st[i]>='a' && st[i]<='z') || (st[i]>='A' && st[i]<='Z') ||(st[i]>='1' && st[i]<='9') || st[i]=='_' || st[i]=='.')
                    {
                        res++;
                    }
                    else
                    {
                        cout << "NO" << endl;
                        return 0;
                    }
                }

                if(res>=1 && res<=16)
                {
                    cout << "YES" << endl;
                    return 0;
                }
                else
                {
                    cout << "NO" << endl;
                    return 0;
                }
            }
        }

    }





    return 0;
}

