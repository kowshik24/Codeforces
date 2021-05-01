#include<bits/stdc++.h>
using namespace std;
//// kowasdasdsadsadasdasdasdasdasd

int main()
{
    int q;

    cin >> q;

    long long int n , k;



    for(int i=0; i<q; i++)
    {
        cin >> n >> k;



        long long int price[n];


        for(int j=0; j<n; j++)
            cin >> price[j];

            sort(price , price+n);
            long long int min = price[0];

//            cout << min << endl;

            long long int ans = min + k;




            int flag = 0;

            for(int l=0; l<n; l++)
            {
                if(abs(ans-price[l])<=k)
                    continue;
                else
                {
                    cout << -1 << endl;
                    flag = 1;
                    break;
                }
            }

            if(flag == 0)
                cout << ans << endl;
    }
}
