#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000],odd,even;
    int n,od=0,ev=0;

    cin >> n;

    for(int i=0; i<n; i++) {
        cin >> a[i];

        if(a[i]%2==0)
        {
            even=i;
            ev++;
        }
        else
        {
            odd=i;
            od++;
        }
    }

    if(od<ev)
    {
        cout << odd+1 << endl;
    }
    else
    {
        cout << even+1 << endl;
    }

    return 0;
}
