#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,sqr,x,y,te;
    int t;


    cin >> t;

    for(int i=0; i<t; i++)
    {
        cin >> n;

        sqr = ceil(sqrt(n));
        if(sqr*sqr-n<sqr)
        {
            x=sqr;
            y=sqr*sqr-n+1;
        }
        else
        {
            x=-sqr*sqr+2*sqr+n-1;
            y=sqr;
        }
        if(sqr&1)
        {
            te=x;
            x=y;
            y=te;
        }

        cout << "Case " << i+1 << ":" << " " << x <<" "<< y << endl;
    }

    return 0;

}
