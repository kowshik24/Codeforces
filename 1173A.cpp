#include<bits/stdc++.h>
using namespace std;


int main()
{
    int a , b , c;

    cin >> a >> b >> c;

    if(a==b && c==0)
    {
        cout << "0" << endl;
    }
    else if(abs(a-b)<=c)
    {
        cout << "?" << endl;
    }
    else if(a<b)
    {
        cout << "-" << endl;
    }
    else if(a>b)
    {
        cout << "+" << endl;
    }


    return 0;

}
