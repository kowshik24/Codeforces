#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long int n;

    cin >> n ;


    long long int ar[n];

    for(int i=0; i<n; i++)
        cin >> ar[i];




    if(n%2==0)
    {


        for(int i=0; i<n; i++)
        {
            if(ar[i]>0)
            {
                ar[i] = -ar[i]-1;
            }
        }

        for(int i=0; i<n; i++)
            cout << ar[i] << " ";

    }

    else
    {

        sort(ar,ar+n);

        long long int  odd = 0;





        for(int i=0; i<n; i++)
        {
            if(ar[i]<0)
            {
                odd++;
            }
        }


        if(odd%2==0)
        {
            for(int i=0; i<n; i++)
                cout << ar[i] << " ";
        }
        else
        {
            for(int i=0; i<n; i++)
            {
                if(ar[i]>0)
                {
                    ar[i] = -ar[i]-1;
                    break;

                }
            }


            for(int i=0; i<n; i++)
                cout << ar[i] << " ";
        }



    }







    return 0;
}
