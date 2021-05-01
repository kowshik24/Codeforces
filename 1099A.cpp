#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h,w,h1,w1,h2,w2;

    cin >> w >> h;

    cin >> w1 >> h1;

    cin >> w2 >> h2;

    int innitial = w;
    int f=0,fl=0;

    for(int i=h; i>=0; i--)
    {
        if(i==h1 && f==0)
        {
            innitial = innitial + i;
            innitial = innitial - w1;

            if(innitial<0)
            {
                innitial=0;
            }
            //cout << innitial << endl;
            f=1;
        }
        else if(i==h2 && fl==0)
        {

            innitial = innitial +i;
            innitial = innitial - w2;
            if(innitial<0)
            {
                innitial=0;
            }

            //cout << innitial << endl;
            fl=2;
        }
        else
        {
            innitial = innitial + i;
            //cout << innitial << endl;
        }

    }

    if(innitial<=0)
    {
        cout << 0 << endl;
    }
    else
    {
    cout << innitial << endl;
    }

    return 0;

}
