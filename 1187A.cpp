#include<bits/stdc++.h>
using namespace std;


int main()
{

    int q;

    long long int n , s , t;

    cin >> q;


    for(int i=0; i<q; i++)
    {
        cin >> n >> s >> t;


        cout << max(s-(s+t-n), t-(s+t-n)) + 1 << endl;
    }



    return 0;
}
