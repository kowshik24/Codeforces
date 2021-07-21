
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
#define RSORT(v)        sort(v.begin(),v.end(),greater<ll>())
#define REV(v)          reverse(v.begin(),v.end())



#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;


#define Yes cout << "YES" << endl;
#define No cout << "NO" << endl;

#define r0 return 0


#define FASTIO        ios_base::sync_with_stdio(0);cin.tie(nullptr);


ll n , m;

vector<ll>v[200005];

ll dist[200005];
bool vis[200005];

ll pred[200005];





bool bfs(ll n1)
{
    for (int i = 1; i <= n; i++) {
        dist[i] = INT_MAX;
        pred[i] = -1;
        vis[i] = false;
    }

    list<ll>q;


    vis[n1] = true;
    dist[n1] = 0;

    q.push_back(n1);


    while (!q.empty())
    {
        ll fnt = q.front();

        q.pop_front();


        for (int i = 0; i < (int)v[fnt].size(); i++)
        {
            if (!vis[v[fnt][i]])
            {
                vis[v[fnt][i]] = true; // mark if visited or not

                dist[v[fnt][i]] = dist[fnt] + 1; // level

                q.push_back(v[fnt][i]);

                pred[v[fnt][i]] = fnt; // parent node store


                //cout << "node : " << v[fnt][i] << endl;

                if (v[fnt][i] == n)
                {
                    return true;
                }

            }
        }
    }

    return false;
}








int main()
{
    FASTIO;



    cin >> n >> m;


    for (int i = 1; i <= m; i++)
    {
        ll a , b;

        cin >> a >> b;

        v[a].pb(b);
        v[b].pb(a);
    }


  bool kos = bfs(1);



if(kos==0)
{
    cout << "IMPOSSIBLE" << endl;
    r0;
}
  //cout << "kos " << kos << endl;


    
        vector<ll>path;

        path.pb(n);

        ll i = n;

        while(pred[i]!=-1)
        {
           path.pb(pred[i]);
           i = pred[i];
        }

        cout << (int)(path.size()) << endl;


        for(int i=(int)path.size()-1; i>=0; i--) cout << path[i] << " ";

            cout << endl;


    





    return 0;
}
