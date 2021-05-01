#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;

    string s;

    cin >> n >> s;

    long long int zero = 0, one = 0;


    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='0')
        {
            zero++;
        }
        else
        {
            one++;
        }
    }

    if(one==zero)
    {
        cout << 0 << endl;
    }
    else if(one<zero)
    {
        cout << n -(2*one) << endl;
    }
    else
    {
        cout << n-(2*zero) << endl;
    }


    return 0;
}
