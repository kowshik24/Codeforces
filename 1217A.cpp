#include<bits/stdc++.h>
using namespace std;



#define ll long long

int main()
{

    int t;

    cin >> t;


    while(t--)
    {

        ll n , x ;

        cin >> n >> x;
        ll ar[n],h[n];


        for(int i=0; i<n; i++)
        {
            cin >> ar[i] >> h[i];
        }

        ll mini = x;

        int flag = 0;

        for(int j=0; j<n; j++)
        {

            mini = mini - min(mini,ar[j]);

            if(mini==0)
            {
                 flag= 1;

                break;
            }
            else
            {
                mini += h[j];
            }

        }

        if(flag)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << mini << endl;
        }
    }





    return 0;
}
