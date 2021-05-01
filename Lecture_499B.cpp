#include <bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    int n,m;

    string s[10000];

    string s1[10000];


    cin >> n >> m;

    for(int i=0; i< m*2 ; i++)
    {

        cin >> s[i];
    }

    for(int i=0; i<n ; i++)
    {
        cin >> s1[i];
    }

     int len = 2*m ;

    for(int i=0; i<n ; i++)
    {
        for(int j=0; j<len ; j++)
        {

        if(s1[i]==s[j])
        {
            int len1 = s[j].length();

            int len2 = s[j+1].length();

            if(len1<len2)
            {
                cout << s[j] << " ";
            }

            else if(len1==len2)
            {
                cout << s[j] <<" ";
            }

            else
            {
                cout << s[j+1] <<" ";
            }
        }
        }
    }


    return 0;

}
