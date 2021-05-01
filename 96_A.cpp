#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[105];
    int count,count1;
    scanf("%s",&a);

    int l=strlen(a);

    for(int i=0; i<l ; i++)
    {
         count=0;
        count1=0;

        if(a[i]=='0')
        {
            for(int j=i+1; j<l ; j++)
            {
                if(a[j]!='0')
                    break;
                else
                {
                    count++;

                }
            }
        }

        else if(a[i]=='1')
        {
            for(int j=i+1; j<l ; j++)
            {
                if(a[j]!='1')
                    break;

                else
                    count1++;

            }

        }

        if(count>=6 || count1>=6)
        {
        cout<<"YES"<<endl;
        break;
        }
    }

    if(count<6 && count1<6)
        cout<<"NO"<<endl;



  return 0;
}
