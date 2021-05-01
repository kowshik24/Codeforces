#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;

    cin >> t;


    for(int i=0; i<t; i++)
    {
        string s, t, p;

        cin >> s >> t >> p;



        int len1 = s.length();

        int len2 = t.length();

        int len3 = p.length();


        if(len1>len2)
        {
            cout << "NO" << endl;
        }
        else if((len1+len3) < len2)
        {
            cout << "NO" << endl;
        }
        else if(s[0]!=t[0])
        {
            cout << "NO" << endl;
        }
        else
        {
            for(int j=0; j<len1; j++)
            {
                for(int k=0; k<len2; k++)
                {
                    if(s[j]==t[k])
                    {
                        t[k] = '1';
                        break;
                    }
                }
            }

            for(int l=0; l<len3; l++)
            {
                for(int m=0; m<len2; m++)
                {
                    if(p[l]==t[m])
                    {
                        t[m]='1';
                        break;
                    }
                }
            }



            int count = 0;

            for(int m1=0; m1<len2; m1++)
            {
                if(t[m1]=='1')
                {
                    count++;
                }
            }

//            cout << "count " << count << endl;

            if(count==len2)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }

        }
    }

        return 0;
    }
