#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i=1;
    cin>>a>>b;

    while(1)
    {
        a=a*3*i;
        b=b*2*i;
        if(a>b)
        {
            cout<<i<<endl;
            break;
        }
        else
            i++;
    }

    return 0;
}
