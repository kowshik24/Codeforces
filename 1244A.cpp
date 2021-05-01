#include<bits/stdc++.h>
using namespace std;


#define ll long long

int main()
{

    int t;

    cin >> t;

    for(int i=0; i<t; i++)
    {

        int a , b , c , d , k;


        cin >> a >> b >> c >> d >> k;


        int pen = ceil(a*1.0/c);

        int pencil = ceil(b*1.0/d);


        if((pen+pencil)>k)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << pen << " " << pencil << "\n";
        }
    }



    return 0;
}
