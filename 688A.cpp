#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,d;

    cin >> n >> d;



    string st;

    vector<int>v;


    for(int i=0; i<d; i++)
    {
        cin >> st;


        int count = 0 , count1 = 0;

        for(int j=0; j<n; j++)
        {
            if(st[j]=='1')
            {
                count++;
            }
            else
            {
                count1++;
            }
        }

        if(count==n)
        {
            v.push_back(0);
        }
        else
        {
            v.push_back(1);
        }
    }


    int maxi = 0;

    int count2 = 0;

    for(int i=0; i<d; i++)
    {
        if(v[i]==0)
        {
            maxi = max(maxi,count2);

            count2 = 0;

        }
        else
        {
            count2++;
        }
    }

    cout << max(count2,maxi) << endl;

}
