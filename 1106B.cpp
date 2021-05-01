#include<bits/stdc++.h>
using namespace std;
int main()
{
    int dis[100],cost[100],n,m;

    cin >> n >> m;

    for(int i=0; i<n; i++)
        cin >> dis[i];

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        cost[i]=a[i];
    }

        sort(a,a+n);

    int mincost = a[0];
    int j = 0;

    for(int i=0; i<n; i++)
    {
        if(mincost==cost[i])
        {
            min_cost_dis[j] = cost[i];
            j++;
        }
    }


    for(int i=0; i<m; i++)
    {
        cin >> t >> d;

        if(dis[t] < d)
        {

        }
        else
        {
            sum = sum + dis[t] * cost[t];
            dis[t] = dis[t] - dis[t];
            d= d-dis[t];
            if(d==0)
                break;
            else
            {
                sum = sum +
            }


        }
    }
}
