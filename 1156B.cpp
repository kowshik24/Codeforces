#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    char s[102];

    cin >> test;

    for(int i=0; i<test; i++)
    {
        scanf("%s",s);

        int len = strlen(s);



        if(len==1)
        {
            printf("%s\n",s);
        }
        else
        {

            int count = 0;

            for(int j=0; j<len; j++)
            {
                if(s[j]==s[j+1])
                {
                    count++;
                }
            }

            if(count==len)
            {
                printf("%s\n",s);
            }
            else
            {

                int flag = 0;

                for(int j=0; j<len; j++)
                {
                    if(s[j]==s[j+2])
                    {
                       // cout << s[j] << " " << s[j+2] << endl;

                        cout << "No Answer" << endl;
                        flag = 1;
                        break;
                    }
                }

                if(flag==0)
                {

                    int check = 0;
                    for(int i=0; i<len; i++)
                    {
                        if(((s[i+1]-'0')-(s[i]-'0'))==1)
                        {
                            check = 1;
                        }
                        else
                        {
                            check = 0;
                            break;
                        }
                    }

                    if(check==0)
                    {
                        cout << "asd" << endl;
                        printf("%s\n",s);
                    }
                    else
                    {



                        string s1,s2;

                        for(int k=0; k<len; k+=2)
                        {

                            s1.push_back(s[k]);
                        }
                        for(int k=1; k<len; k+=2)
                        {
                            s2.push_back(s[k]);
                        }

                        cout << s2 + s1 << endl;

                    }

                }

            }
        }
    }

    return 0;
}
