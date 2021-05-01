#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[105],b[105],c[105],d[105];
    int s=0,s1=0,sum=0,sum1=0;

    scanf("%s",&a);
    scanf("%s",&b);

    int l1=strlen(a);
    int l2=strlen(b);


     for(int i=0; i<l1 ;i++)
    {
        if(a[i]>='A' && a[i]<='Z')
        {
            c[i]='a'+(a[i]-'A');
            //cout<<c[i]<<endl;
        }
        else
        {
            c[i]=a[i];
            //cout<<c[i]<<endl;
        }
    }


    //cout<<"array d"<<endl;

     for(int i=0; i<l2 ;i++)
    {
        if(b[i]>='A' && b[i]<='Z')
        {
            d[i]='a'+(b[i]-'A');
            //cout<<d[i]<<endl;
        }
        else
        {
            d[i]=b[i];
            //cout<<d[i]<<endl;
        }
    }

    if(lexicographical_compare(c,c+l1,d,d+l2))
    {
        cout<<"-1"<<endl;
    }
    else if(lexicographical_compare(d,d+l2,c,c+l1))
    {
        cout<<"1"<<endl;
    }
    else
    {
        cout<<"0"<<endl;
    }

    return 0;

}
