#include<bits/stdc++.h>
using namespace std;
int main()
{

    set<int>a;

    int n;

    cin >> n;

    a.insert(n);

    while(n!=1)
    {
        n++;

        if(n%10!=0)
        {
            a.insert(n);
        }
        while(n%10==0)
        {
            n=n/10;
            //cout << n << endl;
        }
        a.insert(n);

    }


    for(int i=1; i<10; i++)
    {
        a.insert(i);
    }

    cout << a.size() << endl;

    return 0;
}
