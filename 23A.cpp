#include<bits/stdc++.h>
using namespace std;



int check(string s1, string s, int len)
{

    int len1 = s1.length();

    int count1 = 0;


     int count;

    for(int i=0; i<len; i++)
    {
        if(s[i]==s1[0])
        {

            count = 0;

            for(int j=i+1; j<len1; j++)
            {
                if(s[j]==s1[j])
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
        }

        if(count==len1)
        {
            count1++;
        }
    }

    if(count>=2)
    {
        return len1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    string s;

    cin >> s;


    int len = s.length();

    for(int i=0; i<len; i++)
    {
        string s1;

        for(int j=0; j<i; j++)
            s1.push_back(s[j]);

        int c = check(s1,s,len);

        cout << c << endl;

    }
}
