#include<bits/stdc++.h>
using namespace std;


#define ll long long



int main()
{

    int t;

    cin >> t;


    while(t--)
    {

        ll n , m;

        cin >> n;

        ll pos[n]={-1};

        for(int i=0; i<n; i++)
            cin >> pos[i];


        cin >> m;

        ll neg[m] = {-1};



        for(int j=0; j<m; j++)
            cin >> neg[j];



        ll count = 0;

        if(n>=m)
        {
            for(int k=0; k<m; k++)
            {
                for(int l=0; l<n; l++)
                {
                    if((neg[k]+pos[l])%2==0)
                    {
                        count++;
                    }
                }
            }
        }
        else
        {
            for(int k=0; k<n; k++)
            {
                for(int l=0; l<m; l++)
                {
                    if((neg[l]+pos[k])%2==0)
                    {
                        count++;
                    }
                }
            }

        }

        cout << count << endl;


    }




    return 0;
}
