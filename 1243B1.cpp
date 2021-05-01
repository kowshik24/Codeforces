#include<bits/stdc++.h>
using namespace std;



string getString(char x)
{
    string s(1,x);

    return s;
}


int main()
{
    int n, t;

    cin >> t;

    while(t--)
    {
        string s , t;

        int n;

        cin >> n;




        cin >> s >> t;

        int c1=-1,c2=-1;
        int flag = 0;
        int sum=0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] != t[i])
            {
                sum++;
                if(sum == 1)
                {
                    c1 = i;
                }
                else if(sum == 2)
                {
                    c2 = i;
                }
                else
                {
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 1)
        {
            cout << "No" << endl;
            continue;
        }
        if(s[c1] == s[c2]&&t[c1] == t[c2])
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}
