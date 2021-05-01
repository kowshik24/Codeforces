#include<bits/stdc++.h>
using namespace std;


int main()
{
    int q;

    cin >> q;


    for(int i=0; i<q; i++)
    {

        int n;

        cin >> n;

        int ar[n];


        for(int j=0; j<n; j++)
        {
            cin >> ar[j];
        }

        sort(ar,ar+n);



        int f = 0;

        for(int k=0; k<n-1; k++)
        {
            if(abs(ar[k+1]-ar[k])==1)
            {
                cout << 2 << "\n";
                f=1;
                break;
            }
        }

        if(f==0)
            cout << 1 << "\n";
    }



    return 0;
}
