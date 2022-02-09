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



///..................Sort by second element in a pair in decending order............. ///
bool SortbySecDesc(const pair<long long,long long > &a, const pair<long long,long long > &b)
{

    return a.second>b.second;

    /*

    2 89
    1 20
    9 11
    5 10
    5 9
    4 7
    4 6

    */


}

///..................Sort by second element in a pair in increasing order............. ///
bool SortbySecInc(const pair<long long,long long > &a, const pair<long long,long long > &b)
{
    return a.second<b.second;

    /*

    4 6
    4 7
    5 9
    5 10
    9 11
    1 20
    2 89

    */
}



///.........................first element of pair in descending order..........................//////
bool sortinrev(const pair<int,int> &a,
               const pair<int,int> &b)
{
    return (a.first > b.first);

    /*

    9 11
    5 10
    5 9
    4 6
    4 7
    2 89
    1 20

    */
}




///..................................Binary Search in Pair(Pair er 1st element er upor binary search korbe)..................//////

struct compare
{
    bool operator()(const pair<int,int> & value, const int &key)
    {
        return (value.first<key);
    }

    bool operator()(const int &key, const pair<int,int> &value)
    {
        return (key<value.first);
    }
};



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
/// convert a string to long long , binary , hexadecimal ///

void convert(string num)
{
    cout << stoll(num,nulptr,10) << endl;

   //10->Decimal,2->Binary,8->Octal,16->Hexadecimal//

}

*/





//long long  Prime[3000000],nPrime;
//long long  mark[10000002];
//
//void seive()
//{
//
//    ll n = 1000000;
//
//
//	long long int i,j,limit=sqrt(1000000000000*1.0)+2;
//	mark[1]=1;
//	for(i=4; i<=n ;i+=2)
//	mark[i]=1;
//	Prime[nPrime++]=2;
//	for(i=3; i<=n; i+=2)
//	{
//		if(!mark[i])
//		{
//			Prime[nPrime++]=i;
//			if(i<=limit)
//			{
//				for(j=i*i; j<=n ;j+=i*2)
//				{
//					mark[j]=1;
//				}
//			}
//		}
//	}
//}



///std::cin.ingore() used for line of a string///



/// gcd and lcm code shortcut ////
ll gcd(ll a, ll b)
{
    return (b == 0 ? a : gcd(b,a%b));
}

ll lcm(ll a, ll b)
{
    return (a * ( b /(gcd(a,b))));
}


bool check(string expr)
{

    stack<char> s;
    char x;

    for (int i = 0; i < expr.length(); i++)
    {
        if (expr[i] == '(' || expr[i] == '['
                || expr[i] == '{')
        {

            s.push(expr[i]);
            continue;
        }


        if (s.empty())
            return false;

        switch (expr[i])
        {
        case ')':


            x = s.top();
            s.pop();
            if (x == '{' || x == '[')
                return false;
            break;

        case '}':


            x = s.top();
            s.pop();
            if (x == '(' || x == '[')
                return false;
            break;

        case ']':


            x = s.top();
            s.pop();
            if (x == '(' || x == '{')
                return false;
            break;
        }
    }

    return (s.empty());
}






ll kor(ll n)
{

    ll low = 1, hi = 10000;


    while(low<=hi)
    {

        ll mid = (low+hi)/2;

        if((mid*mid*mid)==n)
        {
            return 1;
        }
        else if((mid*mid*mid)<n)
        {
            low = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }

    }

    return 0;
}



void berkor(ll n)
{
    ll low = 1, hi = n;


    while(low<=hi)
    {
        ll mid = (low+hi)/2;


        ll ans = __gcd(low,mid);
        ll ans1 = __gcd(mid,hi);


        if((low+mid+ans)==n or (hi+mid+ans1)==n)
        {

            if((low+mid+ans)==n)
            {
                cout << low << " " << mid << " " << ans << endl;
                return;
            }
            else
            {
                cout << hi << " " << mid << " " << ans1 << endl;
                return;

            }

        }

        if(ans>ans1)
        {
            low = mid+1;


        }
        else
        {
            hi = mid-1;

        }
    }
}



struct edge
{
    int a;
    int b;
    int w;

};

edge v[10005];

int par[10001];

bool cmp(edge a, edge b)
{
    if (a.w<=b.w)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int find(int a)
{
    if(par[a]==-1)
    {
        return a;
    }
    else
    {
        return par[a] = find(par[a]);
    }
}


void marge(int a, int b)
{
    par[a] = b;
}




map<pair<ll,ll>,bool>m;
map<pair<ll,ll>,ll>kos;





bool kor(ll n, ll x,ll a[])
{
    ll b[n+2];
    MEM(b,0);


    for(int i=n-1; i>=2; i--)
    {
        if(a[i]+b[i]<x)
        {
            return false;
        }

        ll start = 0, stop = a[i], ans = 0;


        while(start<=stop)
        {
            ll mid = (start+stop)/2;


            if(3LL*mid<=a[i] and a[i]-(3LL*mid)+b[i]>=x)
            {
                start = mid + 1;
                ans = mid;
            }
            else
            {
                stop = mid - 1;

            }

        }

        b[i-1] += ans;
        b[i-2] += (2LL*ans);

    }

    if(b[0]+a[0]>=x and b[1]+a[1]>=x)
    {
        return true;
    }
    else
    {
        return false;

    }






}





int main()
{
    FASTIO;

    ll t;

    cin >> t;


    while(t--)
    {

        ll n, x, y;

        cin >> n >> x >> y;

        ll sum = 0;



        for(int i=0; i<n; i++)
        {

            ll a;

            cin >> a;

            sum += a;
        }

        if((sum+x+y)%2==0)
        {
            cout << "Alice" << endl;
        }
        else
        {
            cout << "Bob" << endl;

        }
    }





    return 0;
}
