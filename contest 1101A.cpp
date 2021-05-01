#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int l,r,d,test;

    cin >> test;

    for(int i=0; i<test; i++)
    {
        cin >> l >> r >> d;

        if(d==1)
        {
            cout << 1 << endl;
        }

        else
        {
            if((l+r)%d==0)
                cout << d << endl;

                else
                    cout << l+r << endl;

        }
    }

    return 0;
}
