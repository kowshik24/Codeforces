#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[105];
    int b[105];
    scanf("%s",&a);

    int l = strlen(a);
    int n=0,j=0;
    for(int i=0; i<l ;i++)
    {
        if(a[i]=='+')
            n++;
        else
        {
            b[j]=a[i]-'0';
            j++;
        }
    }
     sort(b,b+j);

     int k=0;

    for(int i=0; i<j ;i++)
    {
        cout<<b[i];
        if(k<n)
        {
        cout<<"+";
        k++;
        }
    }

    return 0;
}
