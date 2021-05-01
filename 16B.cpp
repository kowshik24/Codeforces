#include<bits/stdc++.h>
using namespace std;


/// Sort by second in decending order///
bool sortbysecdesc(const pair<long long,long long > &a,
                   const pair<long long,long long > &b)
{
    return a.second>b.second;
}


#define ll long long
#define pi 3.14156
#define
int main()
{
    long long  n, m;

    cin >> m >> n;


    vector<pair<int,int>>v;

    for(int i=0; i<n; i++)
    {
        long long  a, b;

        cin >> a >> b;

        v.push_back(make_pair(a,b));
    }


    sort(v.begin(),v.end(),sortbysecdesc);

    long long sum = 0;


    for(int i=0; i<v.size(); i++)
    {

       // cout << v[i].first << " " << v[i].second << endl;


        if(m>0)
        {


            if(v[i].first<=m)
            {
                sum = sum +(v[i].first*v[i].second);

                m -= v[i].first;
            }
            else if(v[i].first>m)
            {
                sum += (v[i].second*m);

                m -= m;
            }
        }
    }

    cout << sum << endl;


}
