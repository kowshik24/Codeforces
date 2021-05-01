#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,flag;

    int a[100];

    cin >> n;


    while(1)
    {

        n++;
       int  m=n;
       flag=0;
        int i=0;
        while(m!=0)
        {
            m=m%10;
            a[i]=m;

            //cout <<a[i] << endl;
            i++;
            m=m/10;
        }

        for(int i=0; i<4; i++)
            cout << a[i] << endl;;

        for(int k=0; k<3; k++)
        {
            for(int l=k+1; l<4; l++)
            {
                if(a[k]==a[l])
                {
                    flag=1;
                    break;
                }
            }

            if(flag==1)
            {
                break;
            }
        }

        if(flag==0)
        {
                cout << n << endl;
                break;
        }
    }

    return 0;
}
