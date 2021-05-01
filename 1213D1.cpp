#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    ll n,k;
    cin >> n >> k;


    ll ar[n];

    for(int i=0; i<n; i++)
        cin >> ar[i];


    vector<ll>v;

    for(int i=0; i<n; i++)
    {
        if(ar[i]==ar[i+1])
        {
            ll maxi = ar[i];
            ll count = 0;
            ll count1 = 0;

            for(int j=i; j<n; j++)
            {

                if(count==k)
                {
                    v.push_back(count1);
                    break;
                }
                if(ar[j]==maxi)
                {
                    count++;
                }
                else
                {
                    ar[j] = floor(ar[j]/2);
                    count1++;

                    if(ar[j]==maxi)
                    {
                        count++;
                    }
                }
            }
        }
    }

    sort(v.begin(),v.end());

    cout << v[0] << endl;


}
