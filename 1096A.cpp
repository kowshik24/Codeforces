#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int l,r;
    int t;

    cin >> t;

    for(int i=0; i<t; i++)
    {
        cin >> r >> l;

        if(r!=l)
        {
            if(r==1)
            {
                cout << r << " " << l << endl;
            }
            else if(r%2==0)
            {
                cout << r << " " << 2*r << endl;
            }
            else if(r%2!=0)
            {
                cout << r << " " << 2*r << endl;
            }
        }
    }

    return 0;
}
