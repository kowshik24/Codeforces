#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n, ans=0 ;


    float t,x ;


    pair <int,float> p[1000];

    cin>>n >>t;

    for (int i=0; i<n; i++)
    {
        cin>>p[i].first>>p[i].second;
    }

    sort(p,p+n);

    for (int i=1; i<n; i++)
    {
        x=(p[i].first - p[i].second/2)-(p[i-1].first + p[i-1].second/2);
        if(x>t)
            ans+=2;
        else if(x==t)
            ans++;
    }


    cout<<ans+2 << endl;
    return 0;
}
