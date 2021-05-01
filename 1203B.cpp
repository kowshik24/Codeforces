#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n , q;

    cin >> q;

    for(int i=0; i<q; i++)
    {
        cin >> n;


        long long int ar[4*n];

        long long int cnt[10005] = {0};


        for(int j=0; j<4*n; j++)
        {
            cin >> ar[j];
            cnt[ar[j]]++;
        }


        int fl = 0;

        for(int l=1; l<4*n; l++)
        {
            if(ar[l]==ar[l-1])
                continue;
            else
            {
                fl = 1;
                break;
            }
        }

        if(fl==0)
        {
            cout << "YES" << endl;

        }
        else
        {

        int f = 0;
        for(int k=0; k<4*n; k++)
        {
            if(cnt[ar[k]]==2)
                continue;
            else
            {
                cout << "NO" << endl;
                f = 1;
                break;
            }
        }

        if(f==0)
            cout << "YES" << endl;
        }
    }

    return 0;
}
