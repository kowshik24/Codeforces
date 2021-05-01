#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin >> n;

    vector<int>v(n);


    int cnt[30001] = {0};

    for(int i=0; i<n; i++)
    {
        int m ;

        cin >> m;
        cnt[m] = 1;

    }

    for(int i=1; i<=30001; i++)
    {
        if(cnt[i]==0)
        {
            cout << i << endl;
            break;
        }
    }
}
