#include<bits/stdc++.h>
using namespace std;



#define ll long long


map<pair<int,int>,int>mp;

char s[1000001];


int main()
{

    ll t, n;

    cin >> t;



    while(t--)
    {



        cin >> n;

        scanf("%s",s+1);

        mp.clear();

        mp[make_pair(0,0)] = 1;



        ll x = 0, y = 0;

        ll ans = n+1;


        ll l , r ;



        for(int i=1; i<=n; i++)
        {



            if(s[i]=='L')
                x--;
            if(s[i]=='R')
                x++;
            if(s[i]=='U')
                y--;
            if(s[i]=='D')
                y++;
            int v=mp[make_pair(x,y)];
            if(v)
            {
                if(ans>i-v+1)
                {
                    ans=i-v+1;
                    l=v,r=i;
                }
            }
            mp[make_pair(x,y)]=i+1;
        }

        if(ans==n+1)
        {
            cout << -1 << endl;

        }
        else
        {
            cout << l << " " << r << endl;
        }




    }





    return 0;
}

