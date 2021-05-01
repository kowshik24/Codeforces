#include<bits/stdc++.h>
using namespace std;

#define ll long long

  ll ar[502][502];
int main()
{
    ll n , m;

    cin >> n >> m;





    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cin >> ar[i][j];
        }
    }



    for(int i=2; i<=m; i++)
    {
        for(int j=2; j<=n; j++)
        {

            if(ar[j][i]==0)
            {

                if(ar[j][i-1] == 0 || ar[j][i+1]==0)
                {
                    ar[j][i] = ar[j-1][i] + 1;

                }
                else
                {


                int maxi = max(ar[j][i-1],ar[j][i+1]);

//                cout <<"maxi " <<  maxi << endl;


                ar[j][i] = maxi - 1;
                }
            }


        }
    }



//    cout << "...................................." << endl;

    ll sum = 0;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {

//            cout << ar[i][j] << " ";
            sum += ar[i][j];
        }

//        cout << endl;

    }

//    cout << "........................................." << endl;


    int f = 0;
    int f1 = 0;


    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<m; j++)
        {
            if(ar[i][j]<ar[i][j+1])
            {

//                cout << ar[i][j] << " " << ar[i][j+1] << " ";
                 continue;

            }

            else
            {

//                cout << "fst " << endl;

                cout << -1 << endl;
                return 0;
            }
        }
    }

    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<n; j++)
        {
            if(ar[j][i]<ar[j+1][i])
                continue;
            else
            {

//                cout << "secnd " << endl;

                cout << -1 << endl;
                return 0;
            }
        }
    }


    cout << sum << endl;


    return 0;
}
