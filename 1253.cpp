#include<bits/stdc++.h>
using namespace std;



#define ll long long

int ar[10003];


int main()
{
    int t;


    cin >> t;

    for(int i=0; i<t; i++)
    {
        int n;

        cin >> n;


        int a[n],b[n];


        for(int j=0; j<n; j++)
        {
            cin >> a[j];
        }

        for(int k=0; k<n; k++)
            cin >> b[k];

            int f = 0;


        for(int l=0; l<n; l++)
        {
            if(b[l]<a[l])
            {
                cout << "NO" << endl;
                f = 1;
                break;
            }
            else
            {

                int m = abs(a[l]-b[l]);

                ar[m]++;

            }
        }



        int count = 0;

        for(int i1=1; i1<=1000; i1++)
        {
            if(ar[i1]>0)
            {
                count++;
            }
        }

        if(count>2 && f==0)
        {
            cout << "NO" << endl;
        }
        else if(f==0)
        {
            cout << "YES" << endl;
        }




    }







    return 0;
}

