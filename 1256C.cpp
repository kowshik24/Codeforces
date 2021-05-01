#include<bits/stdc++.h>
using namespace std;

int pil[10002],nw[100002];


int main()
{
    int n , m , d;

    cin >> n >> m >> d;

    int sum = 0;


    for(int i=1; i<=m; i++)
    {
        cin >> pil[i];
        sum += pil[i];
    }

    int pos = 0;


    for(int i=1; i<=m; i++)
    {
        if(pos+d+sum>n+1)
        {

            for(int j=pos+1; j<pos+1+pil[i]; j++)
            {
                nw[j] = i;
            }

            pos = pos + 1 + pil[i] - 1;

            sum -= pil[i];

        }
        else
        {
            for(int j=pos+d; j<pos+d+pil[i]; j++)
            {
                nw[j] = i;
            }

            pos = pos + d + pil[i] - 1;
            sum -= pil[i];
        }
    }

    if(pos+d>=n+1)
    {
        cout << "YES" << endl;


        for(int i=1; i<=n; i++)
            cout << nw[i] << " ";

        cout << "\n";
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;




}
