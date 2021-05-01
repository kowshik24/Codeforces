#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,num;
    int test;
        cin >> n >> m;

        int count = 0;

        num = n;

        if(n==m)
            cout << 0 << endl;

        else if( m%n!=0 || m<n)
            cout << -1 << endl;

        else if(m%n==0)
        {
            while(1)
            {
                num = num * 2;

                if(num%n==0)
                {
                    num = num * 2;
                    count++;
                    if(num==m)
                        cout << count << endl;
                }
                else
                {
                    num = num * 3;
                    count++;
                    if(num==m)
                        cout << count << endl;
                }
            }

        }
}
