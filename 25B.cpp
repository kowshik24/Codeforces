#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int n;

    cin >> n;

    cin >> s;

    int sz = s.size();

    if(sz==2)
    {
        cout << s << endl;
    }
    else if(sz==3)
    {
        cout << s << endl;
    }
    else if(sz==5)
    {
        cout << s[0] << s[1] << s[2] << "-" << s[3] << s[4];
    }

    else if(sz%2==0)
    {
        for(int i=0; i<sz; i+=2)
        {
            cout << s[i] << s[i+1];

            if(i!=sz-2)
            {
                cout << "-";
            }
        }

    }
    else
    {
        cout << s[0] << s[1] << s[2] << "-";

        for(int i=3; i<sz; i+=2)
        {
            cout << s[i] << s[i+1];

            if(i!=sz-2)
            {
                cout << "-";
            }
        }



    }
}
