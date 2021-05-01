#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long int n , k;

    cin >> n >> k;

    long long int ar[n];



    for(int i=0; i<n; i++)
        cin >> ar[i];

        if(k==1)
        {
            cout << abs(ar[0]-ar[n-1]) << endl;
            return 0;
        }
        else if(k==n)
        {
            cout << 0 << endl;

            return 0;
        }

        else
        {
            vector<long long int>vc;



            for(int i=1; i<n; i++)
            {
                vc.push_back(ar[i]-ar[i-1]);
            }



            sort(vc.begin(),vc.end());
//
//            for(int i=0; i<vc.size(); i++)
//                cout << vc[i] << " ";
//
//            cout << "\n";


            long long int ans = 0;

            for(int i=0; i<vc.size()-(k-1); i++)
                ans += vc[i];

                cout << ans << endl;

                return 0;
        }
}
