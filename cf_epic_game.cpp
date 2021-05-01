#include<bits/stdc++.h>
using namespace std;

int gcd(int x,int y)
{

    int t,t1;

    if(x>y)
    {
        t=x;
    }
    else
    {
        t=y;
    }

    for( ;t>=1;t--)
    {
        if(x%t==0 && y%t==0)
        {
           t1=t;
            break;
        }
    }

    return t1;
}
int main()
{
    int a,b,n,flag=1,s=0,a1=0;

    cin>>a>>b>>n;


    while(1)
    {
        if(flag%2==1)
        {

             if(n==0)
            {
                break;
            }
            else
            {
           int gcd_s=gcd(a,n);

            flag++;
            n=n-gcd_s;



            s++;
            }
        }
        else if(flag%2==0)
        {


            if(n==0)
            {
                break;
            }
            else
            {
           int gcd_a=gcd(b,n);

            flag++;
            n=n-gcd_a;



            a1++;
            }

        }
    }

    if(a1>=s)
    {
        cout<<1<<endl;
    }
    else
    {
       cout<<0<<endl;
    }

    return 0;
}
