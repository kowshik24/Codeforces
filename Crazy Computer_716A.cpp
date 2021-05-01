#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,c,a,b=0,count=0;

    cin >> n >> c;

    for(int i=0; i<n; i++ )
    {

        cin >> a;

        if(i==0)
        {
            b=a;
            count++;
        }
        else
        {
            if( a-b <= c)
            {
                count++;
                b=a;
            }
            else
            {
                b=a;
                count=0;
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}
