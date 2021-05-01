#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[2002];


    scanf("%s",&s);

    int len = strlen(s);


    int count = 0 , count1 = 0;


    for(int i=0; i<len; i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            count++;
        }
    }

//    cout << count << endl;

    for(int i=0; i<len; i++)
    {
        if(s[i]>='A'  && s[i]<='Z')
        {
            count1++;
        }
    }

    int count3 = 0;

    for(int i=1; i<len; i++)
    {
        if(s[i]>='A' && s[i]<='Z')
            {
                count3++;
            }
    }


    int a = (int)s[0];

//    cout << a << endl;

    if(a>=97 && count3==len-1)
    {

        int flag = 0;

        for(int i=1; i<len; i++)
        {

            if(s[i]>='A' && s[i]<='Z')
            {
                continue;
            }
            else
            {
                flag = 1;
                break;
            }
        }


        if(flag==0)
        {

            for(int i=0; i<len; i++)
            {
                if(s[i]>='a' && s[i]<='z')
                {
                    char s1 = s[i]-'a'+'A';
                    printf("%c",s1);
                }
                else
                {
                    char s2 = s[i] - 'A' + 'a';
                    printf("%c",s2);
                }

            }
        }
        else
        {
            cout << s << endl;
            return 0;

        }
    }


    else if(count1==len)
    {
        cout << strlwr(s) << endl;
        return 0;
    }
    else if(count==len)
    {
//        for(int i=0; i<len; i++)
//        {
//            char s3 = s[i]-'a'+'A';
//            printf("%c",s3);
//        }

          cout << s << endl;
          return 0;
    }
    else
    {
        cout << s << endl;
        return 0;
    }





    return 0;
}
