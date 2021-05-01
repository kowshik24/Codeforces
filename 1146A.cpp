#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[55];

    scanf("%s",&s);

    int len = strlen(s);

    //cout << len << endl;


    int count =0;

    for(int i=0; i<len; i++)
    {
        if(s[i]=='a')
        {
            count++;
        }
    }

    cout << min(2*count-1,len) << endl;

   /*cout << count << endl;

    if(count>(len/2))
    {
        cout << len << endl;
    }
    else if(count==(len/2))
    {
        cout << len - 1 << endl;
    }
    else
    {
        int m = (len/2)+1;
       int count = 0;

        for(int i=0; i<len; i++)
        {
            if(count>m)
                break;
            else
            {
                if(s[i]!='a')
                    count++;
            }
        }

        cout << len - count << endl;

        cout << len - m << endl;*/


    return 0;
}
