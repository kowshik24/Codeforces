#include<bits/stdc++.h>
using namespace std;

char a[100000000],b[100000000],c[10000000];
int main()
{
    int r=0;

    scanf("%s",&a);
    scanf("%s",&b);

   int l1=strlen(a);
    int l2=strlen(b);

    int j=0,k=0,i=0;


    while(l1 || l2)
    {
        c[j]=(((a[l1]-'0')%10)+((b[l2]-'0')%10)+r)%10;
        cout<<c[j]-'0'<<endl;

        r=(((a[l1]-'0')%10)+((b[l2]-'0')%10)+r)/10;
        cout<<r<<endl;

        j++;
        l1--;
        l2--;

    }

    for(int m=j ; m<j ;m++)
        cout<<c[m];
}
