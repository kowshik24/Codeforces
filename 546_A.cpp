#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,w,n1;
    cin>>k>>n>>w;

    n1=w*(w+1)/2;

   int n2=n1*k;
   int n3=n2-n;
   if(n3<=0)
   {
       cout<<0<<endl;
   }
   else
   {

    cout<<n3<<endl;
   }

    return 0;

}
