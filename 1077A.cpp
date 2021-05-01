#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,k,l,test;

    cin >> test;

    for(int i=0; i<test; i++)
    {

    cin >> a >> b >> k;

    l=k;

    if(k%2==0)
    {
        cout << (a*(k/2))-(b*(k/2)) << endl;
    }
    else
    {
        cout << (a*(l-(k/2)))-(b*(k/2))<< endl;
    }
    }

    return 0;
}
