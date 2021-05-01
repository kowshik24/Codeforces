#include<bits/stdc++.h>
using namespace std;

#define ll long long


//bool ck[1000000001];

map<ll,ll>m;

int main()
{
    ll n , k;

    cin >> n >> k;


    ll id;

    deque<ll>d;





    for(int i=0; i<n; i++)
    {
        cin >> id;

        if(m[id]==1)
            continue;
        else
        {
            if(d.size()==k)
            {
                ll last = d.back();

                m[last] = 0;

                d.pop_back();
            }

                d.push_front(id);
                m[id] = 1;

        }
    }

    cout << d.size() << endl;



    for(auto x : d)
    {
        cout << x << " ";
    }

    return 0;







}
