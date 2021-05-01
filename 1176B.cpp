#include<bits/stdc++.h>
using namespace std;



int main()
{
    int t;

    cin >> t;

    int n;

    for(int i=0; i<t; i++)
    {
        cin >> n;




        long long int a[n];

        int count = 0;


        long long int num;

        int o = 0;

        for(int j=0; j<n; j++)
        {
            cin >> num;

            if(num%3==0)
            {
                count++;
            }
            else
            {
                a[o] = num;
                o++;
            }
        }

        int count1 = 0;

            for(int k=0; k<o; k++)
            {
                for(int l=k; l<o; l++)
                {
                    if(l+1<o && a[l+1]!=0 && ((a[k]+a[l+1]) % 3 == 0))
                    {
                        count1++;
                        a[k] = 0;
                        a[l+1] = 0;
                    }
                }
            }

            //cout << count << " " << count1 << endl;

            cout << count + count1 << endl;


    }

    return 0;
}
