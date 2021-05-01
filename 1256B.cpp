#include<bits/stdc++.h>
using namespace std;



int ar[1000] , index[1000];


bool check[10000];


int n;






int main()
{
    int t;

    cin >> t;


    for(int i=0; i<t; i++)
    {
        cin >> n;


        memset(ar,0,sizeof(ar));
        memset(check,0,sizeof(check));



        for(int j=1; j<=n; j++)
        {
            cin >> ar[j];

            index[ar[j]] = j;
        }

        for(int k=1; k<=n; k++)
        {
            int a = index[k];

            for(int m=a; m-1>=1; m--)
            {
                if(ar[m]<ar[m-1] && check[m]==0)
                {
                    swap(ar[m],ar[m-1]);
                    check[m] = 1;
                }
                else
                {
                    break;
                }
            }
        }

        for(int c=1; c<=n; c++)
            cout << ar[c] << " ";


        cout << "\n";


    }

    return 0;
}
