#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;

    cin >> n;


    vector<int>v;

    for(int i=0; i<n; i++)
    {
        int x;

        cin >> x;


        v.push_back(x);
    }


    if(n==1)
    {
        cout << -1 << endl;
        return 0;
    }
    else if(v[n-1]>v[n-2])
    {
        cout << "UP" << endl;
        return 0;
    }
    else if(v[n-1]<v[n-2])
    {
        cout << "DOWN" << endl;
        return 0;
    }
    else if(v[n-1]==v[n-2])
    {
        cout << -1 << endl;
        return 0;
    }
}
