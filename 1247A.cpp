#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b;

    cin >> a >> b;


    if(abs(a-b)>1)
    {
        cout << -1 << endl;
        return 0;
    }
    else
    {
        if((a+1)==b)
        {
            cout << a << " " << b << "\n";
        }
        else if(a==b)
        {
            cout << (a*10) << " " << (b*10)+1 << endl;
        }
        else if(a>b)
        {
            cout << (a*10) << " " << (a*10)+1 << endl;
        }
    }
}
