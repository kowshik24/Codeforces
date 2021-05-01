#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    string st;

    cin >> st;


    long long int sum = 0;
    long long int j = 0;

    int f = 0;



    for(int i=0; i<st.size(); i++)
    {
        if(i>0 && st[i]=='1')
            f = 1;
    }

    ll ans = st.size()/2;


    if(st.size()%2==1)
    {
        ans += f;
    }

    cout << ans << endl;


    return 0;
}
