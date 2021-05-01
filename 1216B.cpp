#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int ar[n];

    vector<pair<int,int>>p;



    for(int i=0; i<n; i++)
    {
        cin >> ar[i];
        p.push_back({ar[i],i+1});


    }
    sort(p.begin(),p.end());





    sort(ar, ar+n);




    int cnt = 0;

    int sum = 0;

    for(int i=n-1; i>=0; i--)
    {
        sum += ((cnt*ar[i]) + 1);
        cnt++;

    }

    cout << sum << endl;

    for(int i=n-1; i>=0; i--)
    {
        cout << p[i].second << " ";

    }


}
