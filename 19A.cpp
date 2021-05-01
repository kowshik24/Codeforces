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


/// Convert String to Int ////

int String_to_int(string s)
{

    stringstream geek(s);

    int ans = 0;

    geek >> ans;


    return ans;
}


int String_to_Int(string s)
{

    stringstream geek(s);

    int ans = 0;

    geek >> ans;


    return ans;
}





map<string,int>v;



int main()
{

    int n;

    cin >> n;


    vector<string>s(n);

    for(int i=0; i<n; i++)
    {
        cin >> s[i];
    }


    int n1 = (n*(n-1))/2;

   // cout << n1 << endl;


    for(int i=0; i<n1; i++)
    {

        string s1 , s2;

        string s3="",s4="";



        cin >> s1 >> s2;

        //cout << s1 << endl;

        //cout << s2 << endl;



        int j,k,l,m;

        for(j=0; j<s1.size(); j++)
        {
            if(s1[j]=='-')
            {
                break;
            }
            s3 += s1[j];
        }

        for(k=j+1; j<s1.size(); j++)
        {
            s4 += s1[j];
        }

        string s5="" , s6="";

        for(l=0; l<s2.size(); l++)
        {
            if(s2[l]==':')
            {
                break;
            }
            s5 += s2[l];
        }


        for(m=l+1; m<s2.size(); m++)
        {
            s6 += s2[m];
        }

       // cout << s5 << " " << s6 << endl;

        //cout << s5.size() << " " << s6.size() << endl;




        s4.erase(0,1);




        int kos1 = stoi(s5) ;


        int kos = stoi(s6) ;


      // cout << s3 << " " << s4 << endl;

      // cout << kos << " " << kos1 << endl;



        if(kos==kos1)
        {
            v[s3]++;
            v[s4]++;
            continue;
        }
        else if(kos>kos1)
        {
            v[s4]+=3;
            continue;
        }
        else
        {
            v[s3]+=3;
        }




    }


    vector<pair<string,int>>v1;

    vector<int>v2;



    for(auto it:v)
    {
        v1.pb(mp(it.first,it.second));
        v2.pb(it.second);


    }

    sort(v1.begin(),v1.end());

    sort(v2.begin(),v2.end(),greater<int>());



//
//    for(auto it1:v1)
//        cout << it1.first << " " << it1.second << endl;




    int kos = n/2;


    vector<string>ans;


    for(int i=0; i<kos; i++)
    {
        int dhur = v2[i];

        vector<string>ans1;



        for(int j=v1.size()-1; j>=0; j--)
        {
            if(v1[j].second==dhur)
            {
                ans1.pb(v1[j].first);

            }
        }

        sort(ans1.begin(),ans1.end());

        string s7 = ans1[0];

       // cout << s7 << endl;

        ans.pb(s7);


        for(int b=v1.size()-1; b>=0; b--)
        {
            if(v1[b].first==s7)
            {
                v1[b].first="";
                break;
            }
        }

        ans1.clear();
    }

    sort(ans.begin(),ans.end());

    for(int i=0; i<ans.size(); i++)
        cout << ans[i] << endl;









    return 0;
}

