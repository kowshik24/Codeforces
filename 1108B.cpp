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


///std::cin.ingore() used for line of a string///



template <typename Map>
bool map_compare (Map const &lhs, Map const &rhs) {
    // No predicate needed because there is operator== for pairs already.
    return lhs.size() == rhs.size()
        && std::equal(lhs.begin(), lhs.end(),
                      rhs.begin());
}


map<ll,ll>m,m1;



bool kor(ll x , ll y)
{



    for(int i=1; i*i<=x; i++)
    {
        if(x%i==0)
        {
            if(x/i==i)
            {
                m1[i]++;
            }
            else
            {
                m1[i]++;
                m1[x/i]++;
            }
        }

    }


    for(int i=1; i*i<=y; i++)
    {
        if(y%i==0)
        {
            if(y/i==i)
            {
                m1[i]++;
            }
            else
            {
                m1[i]++;
                m1[y/i]++;
            }
        }

    }

    if(map_compare(m,m1))
    {
        return true;
    }
    else
    {
        m1.clear();

        return false;

    }
}




int main()
{
     FASTIO;

     ll n;

     cin >> n;

     for(int i=0; i<n; i++)
     {

         ll a;

         cin >> a;

         m[a]++;
     }

     vector<ll>v;

     for(auto it:m)
     {
         v.pb(it.ff);
     }


     for(int i=0; i<v.size(); i++)
     {
         for(int j=0; j<v.size(); j++)
         {
             if(kor(v[i],v[j]))
             {
                 cout << v[i] << " " << v[j] << endl;
                 r0;

             }

         }
     }









    return 0;
}
