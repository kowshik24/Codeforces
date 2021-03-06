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

char a[101][101];


int main()
{
    FASTIO;

    int n;


    cin >> n;



    for(int i=1; i<=n; i++)
    {
        int f = 1;

        for(int j=1; j<=n; j++)
        {
            if(a[i][j]=='W' || a[i][j]=='B')
                continue;

           if(f)
           {
               //White
               a[i][j] = 'W';

               if( i-2>=1 && j-1>=1 && a[i-2][j-1]!='W' )
               {
                   a[i-2][j-1] = 'B';
               }

               if( i-2>=1 && j+1<=n && a[i-2][j+1]!='W' )
               {
                   a[i-2][j+1] = 'B';
               }
               if(i-1>=1 && j+2<=n && a[i-1][j+2]!='W' )
               {
                   a[i-1][j+2] = 'B';
               }
               if( i+1<=n && j+2<=n && a[i+1][j+2]!='W' )
               {
                   a[i+1][j+2] = 'B';
               }
               if( i-1>=1 && j-2>=1 && a[i-1][j-2]!='W' )
               {
                   a[i-1][j-2] = 'B';
               }
               if( i+1<=n && j-2>=1 && a[i+1][j-2]!='W')
               {
                   a[i+1][j-2] = 'B';
               }
               if( i+2<=n && j-1>=1 && a[i+2][j-1]!='W' )
               {
                   a[i+2][j-1] = 'B';
               }
               if(i+2<=n && j+1<=n && a[i+2][j+1]!='W')
               {
                   a[i+2][j+1] = 'B';
               }

               f = 0;


           }
           else
           {
               //Black
               a[i][j] = 'B';


               if(i-2>=1 && j-1>=1 && a[i-2][j-1]!='B' )
               {
                   a[i-2][j-1] = 'W';
               }

               if(i-2>=1 && j+1<=n && a[i-2][j+1]!='B')
               {
                   a[i-2][j+1] = 'W';
               }
               if(i-1>=1 && j+2<=n && a[i-1][j+2]!='B')
               {
                   a[i-1][j+2] = 'W';
               }
               if(i+1<=n && j+2<=n && a[i+1][j+2]!='B' )
               {
                   a[i+1][j+2] = 'W';
               }
               if(i-1>=1 && j-2>=1 && a[i-1][j-2]!='B')
               {
                   a[i-1][j-2] = 'W';
               }
               if( i+1<=n && j-2>=1 && a[i+1][j-2]!='B' )
               {
                   a[i+1][j-2] = 'W';
               }
               if(i+2<=n && j-1>=1 && a[i+2][j-1]!='B')
               {
                   a[i+2][j-1] = 'W';
               }
               if(i+2<=n && j+1<=n && a[i+2][j+1]!='B')
               {
                   a[i+2][j+1] = 'W';
               }

               f = 1;


           }

        }
    }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cout << a[i][j];
        }
        cout << endl;

    }





    return 0;
}

