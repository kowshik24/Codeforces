#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;

    cin >> n;

    ll ar[n];


    for(int i=0; i<n; i++)
        cin >> ar[i];


    ll sum = 0, best = 0;

    ll count = 0, ar1[10001]={0};


     sum +=ar[0];
     count += 1;

  // int j = 0;
    for(int i=1; i<n; i++)
    {

        if(ar[i]>=ar[i-1])
        {
            sum += ar[i];
//            cout <<"sum "<<  sum << endl;
            count++;
        }
        else
        {
            sum = 0;
//            cout <<"count" <<  count << endl;

            best = max(best,count);
           // ar1[j] = count;
            //j++;
            count = 0;
            sum += ar[i];
            count++;

        }
    }

    if(count>0)
    {
        best = max(best,count);
    }

    //sort(ar1, ar1+j);


    cout << best << endl;
}
