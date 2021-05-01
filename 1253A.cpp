#include<bits/stdc++.h>
using namespace std;



#define ll long long



int main()
{

    int t;

    cin >> t;



    while(t--)
    {
        int n;

        cin >> n;


        vector<int> a(n), b(n);


        for(int i=0; i<n; ++i)
            cin >> a[i];

        for(int i=0; i<n; ++i)
            cin >> b[i];

        bool ok = true;
        int val = INT_MAX, pos = -1;

        for(int i=0; i<n; ++i)
        {
            int d = a[i] - b[i];
            if(d)
            {
                if(d > 0)
                    ok = false;
                else if(val == INT_MAX)
                    val = d, pos = i;

                else if(val != d || pos != i-1)
                    ok = false;
                else
                    pos = i;
            }
        }

        if(ok)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }





    return 0;
}
