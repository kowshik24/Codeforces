#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int a[200008],count=0,max=0,n;

    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    for(int i=0; i<n; i++)
    {

        if(a[i]==1)
        {
            count++;
        }

        else
        {
            if(count>max)
            {
                max = count;
            }

            count = 0;
        }
    }



    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
            count++;
        else
            break;
    }

    if(count>max)
        max = count;

    cout << max << endl;


    return 0;
}
