#include<bits/stdc++.h>
using namespace std;

#define ll long long
long long int cnt[200005];

int main()
{
    int n;

    cin >> n;

    ll ar[n];

    for(int i=0; i<n; i++)
        cin >> ar[i];



    int count = 0 , count1 = 0;

    for(int i=0; i<n; i++)
    {
        if(ar[i]%2==0)
        {
            count1++;
        }
        else
        {
            count++;
        }
    }

    cout << min(count,count1) << endl;


    return 0;
}
