#include<bits/stdc++.h>
#include<ctype.h>
using namespace std;
int main()
{
    int s=0,b=0;
    string a;
    cin>>a;
    int l=a.length();

    for(int i=0; i<l ;i++)
    {
        if(a[i]>='a' && a[i]<='z')
            s++;
        else
            b++;
    }


     for(int i=0;i<l;i++)
       {
           if(a[i]>=65 && a[i]<=92)
            a[i]=a[i]+32;
	    }

    if(s==b || b<s)
    {
        for(int i=0;i<l;i++)
       {
           if(a[i]>=65 && a[i]<=92)
            a[i]=a[i]+32;
           cout<<a[i];
	    }
    }
    else
    {

        for(int i=0;i<l;i++)
       {

	    if(a[i]>=57 && a[i]<=122)
		a[i]=a[i]-32;
		cout<<a[i];

      }

    }
    return 0;
}
