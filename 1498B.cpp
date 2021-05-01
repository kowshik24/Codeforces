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




int main()
{
     FASTIO;

     ll t;

     cin >> t;

     while(t--)
     {
         ll n , w;

         cin >> n >> w;

         ll a[n+1];


         ll sum1 = 0;

         for(int  i=0; i<n; i++)
         {
             cin >> a[i];
             sum1 += a[i];
         }

         sort(a,a+n);

         ll sum = 0;

         if(sum1<=w)
         {
             cout << 1 << endl;
             continue;
         }


         for(int i=0, j=n-1; i!=j;)
         {

             if((sum+a[i]<=w) && (sum+a[j]<=w))
             {

                 //cout << a[i] << " " << a[j] << endl;

                 if(a[i]>a[j])
                 {
                     sum += a[i];
                     i++;
                 }
                 else
                 {
                     sum += a[j];
                     j--;
                 }
             }
             else if((sum+a[i]<w) || (sum+a[j]<w))
             {
                 if((sum+a[i]<w))
                 {
                     sum += a[i];
                     i++;
                 }
                 else
                 {
                     sum += a[j];
                     j--;
                 }
             }
             else
             {
                 if((sum+a[i]==w) || (sum+a[j]==w))
                 {
                     sum += a[i];
                     break;
                 }
                 else
                 {
                     break;
                 }
             }

         }

         //cout << sum << endl;




         ll cnt = 0;

         ll baki = sum1 - sum;

         //cout << baki << endl;



         //cout <<"baki " <<  baki << endl;


         ll ans = (w+sum1-1)/w;


         ll ans1 = 0;


         if(sum>0)
         {
             ans1++;
         }
         ans1 += (baki/w);

         if(baki%w)
         {
             ans1++;
         }

         //cout << ans << " " << ans1 << endl;




         cout << min(ans,ans1)  << endl;
     }









    return 0;
}

