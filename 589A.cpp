#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{

    ll n;

    cin >> n;

    ll ar[n];

    for(int i=0; i<n; i++)
        cin >> ar[i];

    sort(ar,ar+n);

    ll mini = ar[0];

    if(mini==1)
    {
        cout << 1 << endl;
        return 0;
    }


    ll sq = sqrt(mini);

    ll count = 0;


    for(int i=1; i<=sq; i++)
    {
        if(mini % i == 0)
        {
            count+=2;
        }
    }

    cout << count << endl;






    return 0;
}
