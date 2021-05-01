#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[105],sum=0;

    for(int i=0; i<3; i++)
    {
        cin>>a[i];
    }


    sort(a,a+3);
   int mid = a[1];

   for(int i=0; i<3; i++)
   {
       sum=sum+abs(a[i]-mid);
   }


   cout<<sum<<endl;

    return 0;
}
