#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    char s[100];
    cin>>t;

    scanf("%s",&s);

   double r=sqrt(1+(4*t*2));

   int  n=(-1+r)/2;

    for(int i=1; i<=n; i++ )
    {
        int j=(i*(i+1))/2;
        cout<<s[j-1];
    }

    return 0;
}
