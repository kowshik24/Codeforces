#include<bits/stdc++.h>
using namespace std;


int main()
{
    string hand;

    int be,af;

    int n;

    cin >> n;



    int f = 0;

    for(int i=0; i<n; i++)
    {
        cin >> hand >> be >> af;

        if(be>=2400)
        {
            if(af>be)
            {
                f = 1;
            }
        }
    }

    if(f)
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
    }

    return 0;
}
