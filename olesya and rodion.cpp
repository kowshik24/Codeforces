#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    char a[1000];
    cin>>n>>t;

    if(t==10 && n==1)
    {
        cout<<-1<<endl;
    }
    else if(t==10)
    {
        a[0]=1+'0';
        for(int i=1; i<n; i++)
        {

            a[i]=0+'0';
        }

        for(int i=0; i<n; i++)
            cout<<a[i];
    }

  else
  {
    for(int i=0; i<n; i++)
    {

        a[i]=t+'0';
        cout<<a[i];
    }
  }


    return 0;


}
