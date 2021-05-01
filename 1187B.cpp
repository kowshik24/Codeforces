#include<bits/stdc++.h>
using namespace std;

int mark[30];
#define ll long long int

int main()
{

    ll n;

    vector<ll>v[30];

    cin >> n;


    for(int i=1; i<=n; i++)
    {
        char ch;

        cin >> ch;

        v[ch-'a'+1].push_back(i);
    }




    int test;

    cin >> test;


    string str;

    for(int i=0; i<test; i++)
    {
        cin >> str;

        ll ans = 0;

        for(int j=1; j<=26; j++)
        {
            mark[j]=0;
        }


            ll len = str.size();


            for(int l=0; l<len; l++)
            {
                mark[str[l]-'a'+1]++;
            }

        for(int k=1; k<=26; k++)
        {
            if(mark[k]==0)
                continue;
            ans = max(ans , v[k][mark[k]-1]);
        }

        cout << ans << endl;
    }


    return 0;







    return 0;
}
