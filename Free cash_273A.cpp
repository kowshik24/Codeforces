#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=0,sum=0,j=0;
    int hour[100]={0},minut[100]={0};
    int b[1005]={0};

    cin >> n;

    for(int i=0; i<n; i++)
       cin >> hour[i] >> minut[i];

    for(int i=1; i<=n; i++)
    {
        if(hour[i-1]>0 && minut[i-1]>0)
        {


        if(((hour[i]==hour[i+1]) ||(hour[i]==hour[i-1]) )&&((minut[i]==minut[i+1]) || (minut[i]==minut[i-1])))
        {
            count++;
        }
        else
        {
            b[j]=count;
            j++;
            count=0;
        }
        }
    }

    sort(b,b+j);
    if(b[0]>0)
    {
    cout << b[0] << endl;
    }
    else
    {
        cout << 1 << endl;
    }

    return 0;
}
