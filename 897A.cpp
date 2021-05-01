#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n, m;


    cin >> n >> m;

    char st[102];

    scanf("%s",st);



    for(int i=0; i<m; i++)
    {

        int l,r;

        char c1,c2;

        cin >> l >> r >> c1 >> c2;



        for(int j=l-1; j<=r-1; j++)
        {


            if(st[j] == c1)
            {
               st[j] = c2;

              // cout << st[j] << "\n";

            }
        }
    }


    cout << st << endl;


    return 0;
}
