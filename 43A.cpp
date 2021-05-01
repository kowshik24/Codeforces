#include<bits/stdc++.h>
using namespace std;


/// File input & output /////
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

    int cnt[10000];

char func(int a)
{
    if(a==65)
    {
        return 'A';
    }
    else if(a==66)
    {
        return 'B';

    }
    else if(a==67)
    {
        return 'C';

    }
    else if(a==68)
    {
        return 'D';

    }
    else if(a==69)
    {
        return 'E';

    }
    else if(a==70)
    {
        return 'F';

    }
    else if(a==71)
    {
        return 'G';

    }
    else if(a==72)
    {
        return 'H';

    }
    else if(a==73)
    {
        return 'I';

    }
    else if(a==74)
    {
        return 'J';

    }
    else if(a==75)
    {
        return 'K';

    }
    else if(a==76)
    {
        return 'L';

    }
    else if(a==77)
    {
        return 'M';

    }
    else if(a==78)
    {
        return 'N';

    }
    else if(a==79)
    {
        return 'O';

    }
    else if(a==80)
    {
        return 'P';

    }
    else if(a==81)
    {
        return 'Q';

    }
    else if(a==82)
    {
        return 'R';

    }
    else if(a==83)
    {
        return 'S';

    }
    else if(a==84)
    {
        return 'T';

    }
    else if(a==85)
    {
        return 'U';

    }
    else if(a==86)
    {
        return 'V';

    }
    else if(a==87)
    {
        return 'W';

    }
    else if(a==88)
    {
        return 'X';

    }
    else if(a==89)
    {
        return 'Y';

    }
    else if(a==90)
    {
        return 'Z';

    }

}


int main()
{
    FASTIO;

    int n;

    cin >> n;




    vector<pair<string,int>>v;

    while(n--)
    {
        string st;

        cin >> st;

        int f = 0;

        for(int i=0; i<v.size(); i++)
        {
            if(v[i].first==st)
            {
                v[i].second += 1;
               // cout <<"Update" <<  v[i].second << endl;
                 f = 1;
                break;
            }

        }

        if(f==0)
        {
            v.pb(mp(st,1));

        }
    }

    ///sort(v.begin(),v.end());

    int maxi = -1;


    for(int i=0; i<v.size(); i++)
    {
        maxi = max(maxi,v[i].second);
    }



    //ll maxi = v[v.size()-1].second;

   //cout << maxi << endl;
    for(int i=0; i<v.size(); i++)
    {
        if(v[i].second==maxi)
        {
            cout << v[i].first << endl;
        }
    }


    //cout << v[v.size()-1].first << endl;
    return 0;
}

