#include<bits/stdc++.h>
using namespace std;


char seq[1000001];

int main()
{


    scanf("%s",seq);

    int q;


    cin >> q;

    while(q--)
    {

        int a , b;

        cin >> a >> b;


        stack<char>s;

        if(a==b)
        {
            cout << 0 << endl;
        }
        else
        {

            int count = 0;
            int f = 0;

            for(int i=a-1; i<=b-1; i++)
            {
                if(seq[i]=='(')
                {
                    s.push(seq[i]);
                    f = 1;

                }
                if(!s.empty())
                {
                    if(seq[i]==')')
                    {
                        if(s.top()=='(')
                        {
                            count++;
                            s.pop();
                            continue;
                        }
                        else
                        {
                            break;
                        }
                    }
                }

            }

            cout << 2*count << endl;
        }
    }
}
