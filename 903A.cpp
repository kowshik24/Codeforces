#include<bits/stdc++.h>
using namespace std;


int main()
{


    int t;

    cin >> t;


    for(int i=0; i<t; i++)
    {
        int x;
        cin >> x;

        int f = 0;
        for(int i=0; i<=33; i++)
        {
            if(f)
                break;
            for(int j=0; j<=33; j++)
            {
                if(((3*i)+(7*j))==x)
                {
                    cout << "YES" << "\n";
                    f = 1;
                    break;
                }
            }
        }

        if(f==0)
        {
            cout << "NO" << "\n";
        }

    }

    return 0;
}
