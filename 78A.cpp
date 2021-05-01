
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



#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;


#define Yes cout << "YES" << endl;
#define No cout << "NO" << endl;



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


bool is_vowel(char s)
{

    if(s=='a' || s=='e' || s=='i' || s=='o' || s=='u')
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


    string s1,s2,s3;

    getline(cin,s1);
    getline(cin,s2);
    getline(cin,s3);

    int cnt = 0, cnt1 = 0, cnt2 = 0;



    istringstream ss(s1);

    string word;

    while (ss >> word)
    {

       // cout << word << endl;


        for(auto y:word)
        {
            if(is_vowel(tolower(y)))
            {
                cnt++;
            }
        }


    }


    istringstream st(s2);

    string word1;

    while (st >> word1)
    {

        //cout << word1 << endl;


        for(auto y:word1)
        {
            if(is_vowel(tolower(y)))
            {
                cnt1++;
            }
        }


    }


    istringstream sp(s3);

    string word2;

    while (sp >> word2)
    {

        //cout << word2 << endl;


        for(auto y:word2)
        {
            if(is_vowel(tolower(y)))
            {
                cnt2++;
            }
        }
    }

   // cout << cnt << " " << cnt1 << " " << cnt2 << endl;





    if(cnt==5 && cnt1==7 && cnt2==5)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }











    return 0;
}
