#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;

    cin >> n;

    int ar[n] , cnt[1009]={0};

    for(int i=0; i<n; i++)
    {
        cin >> ar[i];

        cnt[ar[i]]++;
    }



    int count = 0;

    for(int i=0; i<1008; i++)
    {
        if(cnt[i]>0)
        {
            count++;
        }
    }

    cout << count << endl;

    for(int i=0; i<n; i++)
    {

//        cout << "count " << cnt[ar[i]] << endl;

        if(cnt[ar[i]]>1)
        {

           cnt[ar[i]] = cnt[ar[i]] - 1;

            ar[i] = 0;


//            cout << cnt[ar[i]] << endl;

        }
    }




    for(int i=0; i<n; i++)
    {
        if(ar[i]!=0)
        cout << ar[i] << " ";
    }

}
