#include<bits/stdc++.h>
using namespace std;



int main()
{
    string st;

    int n , k;

    cin >> n >> k;

    cin >> st;

    if(n==1 && k==1)
    {
        cout << 0 <<endl;
    }
    else if(k==0)
    {
        cout << st << endl;
    }

    else
    {

        int count = 0;


        if(st[0]!='1')
        {
            st[0] = '1';
            count++;

        }


        for(int i=1; i<n; i++)
        {
            if(count==k)
                break;
            else if(st[i]=='0')
                continue;

            else
            {
                st[i] = '0';
                count++;
            }

        }

        cout << st << endl;



    }


    return 0;

}
