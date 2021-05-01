#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{

    int t;


    cin >> t;


    while(t--)
    {

        ll a, b;

        cin >> a >> b;

        if(b==1)
        {

            ll vag = a/10;

            ll rem = a % 10;



            ll sum = 0;


            for(int i=1; i<=rem; i++)
            {
                sum += i;
            }

            cout << (45*vag) + sum << endl;
        }
        else
        {

           ll kos = 0;

           ll cnt = 9;

           int j = 1;


           vector<ll>v;

           while(cnt!=0)
           {
               ll ans = b * j;

               kos += (ans%10);

               v.push_back(ans%10);

               j++;
               cnt--;
           }

           //cout << kos << endl;



           ll vag_kor = a/b;

           ll rem_kor = vag_kor%10;

           ll sum1 = 0;

           //cout << rem_kor << endl;







           for(int i=0; i<=rem_kor-1; i++)
           {
              sum1 += v[i];

           }

          // cout << sum1 << endl;




           cout << (kos * (vag_kor/10))+ sum1 << endl;


           v.clear();





        }




    }
}
