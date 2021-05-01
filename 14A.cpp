#include<bits/stdc++.h>
using namespace std;


char gd[100][100];


////sdfsdfsdf////

int main()
{
    int n, m;

    cin >> n >> m;



    vector<int>v1;
    vector<int>v2;



    for(int i=1; i<=n; i++)
    {

        int count = 0;

        for(int j=1; j<=m; j++)
        {
            cin >> gd[i][j];

            if(gd[i][j]=='*')
            {
                v1.push_back(i);
                v2.push_back(j);

            }

        }
    }

    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());

    int mini1 = v1[0];
    int maxi1 = v1[v1.size()-1];

    int mini2 = v2[0];
    int maxi2 = v2[v2.size()-1];


    for(int i=mini1; i<=maxi1; i++)
    {
        for(int j=mini2; j<=maxi2 ; j++)
        {
            cout << gd[i][j];
        }
        cout << endl;
    }



    return 0;
}
 
