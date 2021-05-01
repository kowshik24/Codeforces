#include<bits/stdc++.h>
using namespace std;



int main()
{
    long long int a , b , c;


    cin >> a >> b >> c;

//    cout << (a-b) % c << endl;

    if(a==b && c==0)
    {
        cout << "YES" << endl;
        return 0;
    }


    if(b<0 && c<0)
    {
        if((b-a)%c==0)
        cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else if(b>0 && c>0)
    {

        if((b-a)%c==0)
        cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;

}
