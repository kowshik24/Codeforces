#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;

    cin >> t;

    long long int num;


    for(int i=0; i<t; i++)
    {
        cin >> num;


        long long int count = 0;

        int flag = 0;

        while(num!=1)
        {
            if(num%2==0)
            {
                num /= 2;
                count++;
            }
            else if(num%3==0)
            {
                num = (2*num)/3;
                count++;
            }
            else if(num % 5 == 0)
            {
                num = (4*num)/5;
                count++;
            }
            else
            {
                cout << -1 << endl;
                flag = 1;
                break;
            }
        }

        if(flag==0)
        {
            cout << count << endl;
        }
    }

    return 0;
}
