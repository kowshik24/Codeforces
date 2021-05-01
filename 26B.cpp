#include<bits/stdc++.h>
using namespace std;

int main()
{




    string st;


    cin >> st;


    int len = st.length();



    stack<char>s;


    int count = 0;

    for(int i=0; i<len; i++)
    {
         if(st[i]=='(')
        {
            s.push(st[i]);
        }

        else if(s.empty())
        {
            continue;
        }

        else
        {
           char c = s.top();



            if(c != st[i])
            {
                count+=2;
            }

            s.pop();
        }
    }


    cout << count << endl;

    return 0;
}
