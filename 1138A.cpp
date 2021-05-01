#include<bits/stdc++.h>
using namespace std;
int main() {

    long long int n;
    long long int a[100001];
    int a1=0,a2=0,b[10001],j=0,maximum = -1,A;

    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    for(int i=0; i<n; i++)
    {
        if(a[i]==2)
        {
            a2++;
            if(a1>0)
            {
                b[j]=a1;
                j++;
            }
            a1=0;
        }

        else
        {
            a1++;
            if(a2>0)
            {
                b[j]=a2;
                j++;
            }
            a2=0;
        }
    }


    if(a1>0)
    {
        b[j]=a1;
        j++;
    }
    else
    {
        b[j]=a2;
        j++;
    }
   //sort(b,b+(j-1));

   for(int i=0; i<j-1; i++)
   {
       A=min(b[i],b[i+1]);
       if(A>maximum)
       {

           maximum = A;
       }
   }
    //cout << b[i] << endl;


        cout << maximum*2 << endl;




    return 0;
}
