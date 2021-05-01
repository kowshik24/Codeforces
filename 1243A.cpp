#include<bits/stdc++.h>
using namespace std;


int main()
{


    int t;

    cin >> t;

    while(t--)
    {
        int n;

        cin >> n;

        int a ;


        long long int sum = 0;

        int ar[n],ar1[n];


        for(int i=0; i<n; i++)
        {
            cin >> ar[i];
            //cnt[ar[i]]++;

            ar1[i] = ar[i];

        }

        sort(ar,ar+n);


       int low = ar[0];

       int high = ar[n-1];

      // cout << low << " " << high << endl;



        vector<int>v;


        for(int j=low; j<=high; j++)
        {
            int count = 0;

            for(int k=0; k<n; k++)
            {
                if(ar1[k]>=j)
                {
                    count++;
                }
            }

            if(count>=j)
            {
                v.push_back(j);
            }

        }

        sort(v.begin(),v.end());


        cout << v[v.size()-1] << endl;


    }
}
