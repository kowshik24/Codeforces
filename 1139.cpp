#include<bits/stdc++.h>
using namespace std;
int main()
{
    char  s1[100001];
    long long int  a[15]={0};
    long long int n,sum=0;

    cin >> n;

    for(int i=1; i<=n; i++)
    {
        cin >> s1[i];
        if((s1[i]-'0')%2==0)
            sum=sum+i;
    }

    cout << sum << endl;

    return 0;

}
