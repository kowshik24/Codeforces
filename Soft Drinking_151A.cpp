#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,l,c,d,p,nl,np;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int a = k*l;

    int b = a/(n*l);

    int e = (c*d)/n;

    int f = p/(np);

    cout << b <<" "<< e <<" "<< f << endl;

    int min1 = min(b,e);

    cout << min1 << endl;

    cout << min(min1,f) << endl;

    return 0;
}
