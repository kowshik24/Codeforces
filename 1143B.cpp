#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,num[100002],m1;
    cin >> m1;

    int j = 0;

    for(int n=1; n<=m1; n++)
    {
        if(n==1 || n==2 || n==3 || n==4 || n==5 || n==6 || n==7 || n==8 || n==9)
        {
            num[j]=n;
            j++;
        }
        else
        {

            if(n%10==0)
            {

                long long int mul = 1,m;
                n=n-1;

                while(n!=0)
                {
                    m=n%10;
                    mul = mul * m;
                    n = n / 10;
                }

                //cout << mul << endl;

                num[j]=mul;
                j++;

            }
            else
            {
                long long int mul = 1,m;

                while(n!=0)
                {
                    m=n%10;
                    mul = mul * m;
                    n = n / 10;
                }

                cout << mul << endl;

                num[j]=mul;
                j++;

            }
        }
    }


    sort(num,num+j);

    cout << num[j-1] << endl;

    return 0;
}
