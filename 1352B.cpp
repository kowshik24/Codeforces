#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main()
{

    int t;

    cin >> t;

    while(t--)
    {

        ll n;

        cin >> n;

        vector<ll>v;

        int count = -1;

        int f = 1;

        ll count1 = 0;


        while(n!=0)
        {
            int rem = n%10;


            n /= 10;

            count++;

            if(f)
            {
                v.pb(rem);
                f = 0;
               // n /= 10;

            }
            else
            {



                //cout << "rem " << rem << endl;

                ll ans = 1;


                for(int j=1; j<=count; j++)
                    ans *= 10;

                    if(ans*rem==0)
                        continue;
                    else
                    {





                v.pb(rem*ans);
                    }
               // n /= 10;


            }
        }

        for(int i=0; i<v.size(); i++)
        {
            if(v[i]!=0)
                count1++;
        }

        cout << count1 << endl;

        for(int i=0; i<v.size(); i++)
        {
            if(v[i]!=0)
                cout << v[i] << " ";

        }

        cout << endl;
        v.clear();
    }

    return 0;



    }



