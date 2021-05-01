#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[1000];
    char b[1000];

    scanf("%s",&a);
    int l = strlen(a);

    for(int i=0; i<l ;i++)
    {
        if(a[i]>='A' && a[i]<='Z')
            a[i]='a'+(a[i]-'A');
    }

    int j=0,count=0;

    for(int i=0 ; i<l ; i++)
    {
        if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i]=='y')
            continue;
        else
        {
            b[j]=a[i];
            //cout<<b[j]<<endl;
            j++;
            count++;

        }
    }

    for(int i=0; i<count; i++)
        cout<<"."<<b[i];

}
