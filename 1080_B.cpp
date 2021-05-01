#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,a,b,n,n1,n2,odd,even;
    cin>>t;

    while(t--)
    {
        cin>>a>>b;
        n=(b-a)+1;
        if(a%2==0 && b%2==0)
        {
            n1=(n/2)+1;
            even=n1*(a+b)/2;

           //cout<<n1<<endl;
            //cout<<even<<endl;

            n2=n/2;
            odd=n2*((a+1)+(b-1))/2;

            //cout<<odd<<endl;

            cout<<even-odd<<endl;
        }
        else if(a%2==1 && b%2==1)
        {
            n1=(n/2)+1;
            odd=n1*(a+b)/2;

            n2=n/2;

            even=n2*((a+1)+(b-1))/2;
            cout<<even-odd<<endl;

        }

        else if(a%2==0 && b%2==1)
        {
            n1=n/2;
            even=n1*(a+(b-1))/2;
            odd=n1*((a+1)+b)/2;

            cout<<even-odd<<endl;
        }

        else if(a%2==1 && b%2==0)
        {
            n1=n/2;
            even=n1*((a+1)+b)/2;
            odd=n1*(a+(b-1))/2;

            cout<<even-odd<<endl;
        }
    }

    return 0;

}
