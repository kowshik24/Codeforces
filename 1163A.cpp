#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;

    cin >> n >> m;

    cout << (m ? min(m,n-m) : 1) << endl;


    return 0;
}
