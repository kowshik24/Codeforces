#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000005];
    int n,a=0,d=0;

    cin>>n;
    scanf("%s",&s);

    for(int i=0; i<n; i++)
    {

        if(s[i]=='A')
        {
            a++;
        }
        else
        {
            d++;
        }
    }

    if(a>d)
    {
        cout<<"Anton"<<endl;
    }
    else if(a<d)
    {
        cout<<"Danik"<<endl;
    }
    else
    {
        cout<<"Friendship"<<endl;
    }

    return 0;
}
