#include<bits/stdc++.h>
using namespace std;


#define ll long long

int main()
{


    int n,h,m, l,r,x;

    cin >> n >> h >> m;

      vector<int>v(n,h);

    for(int i=0;i<m; i++)
    {

        cin >> l >> r >> x;

        for(int j=l-1; j<r; j++)
        {
            v[j] = min(v[j],x);
        }

    }

//    for(int i=0; i<v.size(); i++)
//        cout << v[i] << " ";



//    cout << "\n";




    ll sum = 0;

    for(int i=0; i<v.size(); i++)
    {
        sum = sum + (v[i]*v[i]);
    }


    cout << sum << "\n";

    return 0;
}
