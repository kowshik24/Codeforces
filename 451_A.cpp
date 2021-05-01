#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    int f=1;

    if(m==n)
    {
        while(m!=0 && n!=0)
        {

        if(f%2==1)
        {
            m--;
            n--;
            if(m==0 && n==0)
            {
                cout<<"Akshat"<<endl;
                break;
            }
            f++;
        }
        else if(f%2==0)
        {
            m--;
            n--;
            if(m==0 && n==0)
            {
                cout<<"Malvika"<<endl;
                break;
            }
            f++;
        }
    }
    }
    else
    {

        while(m!=0 || n!=0)
        {

        if(f%2==1)
        {
            m--;
            n--;
            if(m==0 || n==0)
            {
                cout<<"Akshat"<<endl;
                break;
            }
            f++;
        }
        else if(f%2==0)
        {
            m--;
            n--;
            if(m==0 || n==0)
            {
                cout<<"Malvika"<<endl;
                break;
            }
            f++;
        }

    }
}
return 0;
}
