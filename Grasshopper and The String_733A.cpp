#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[105];

    int a[105]={0};

    int b[105];

    scanf("%s",&s);

    int len = strlen(s);

    int j=0,count=0;

    for(int i=0; i<len ; i++)
    {
        if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='Y')
        {

            a[j]=i+1;

           // cout << a[j] << endl;

            j++;

            count++;
        }
    }

    if(count>0)
    {
     int last = (len+1)-a[count-1];

     //a[count+1]=last;

    // cout << "LAST " << last << endl;

    b[0]=a[0];

     for(int i=1; i<count ; i++)
     {
         b[i]=a[i]-a[i-1];

        // cout << b[i] << endl;
     }

     b[count]=last;

     //for(int i=0; i<=count ; i++)
       // cout << b[i] << endl;

       int n = count+1;

        sort(b,b+n);


        cout << b[n-1] << endl;
    }
    else
    {
        cout << len+1 << endl;
    }

    return 0;
}
