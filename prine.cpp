//1999999973
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

    ll t;

    cin  >> t;

    while(t--)
    {


        string s;

        cin >> s;

        set<char>s1;

        map<char,ll>m;



        for(int i=0; i<s.size(); i++)
        {
            s1.insert(s[i]);

            m[s[i]]++;

        }

        if(s1.size()==s.size() || s.size()==1)
        {
            cout << "NO" << endl;
            s1.clear();

            continue;
        }
        else
        {

            ll cnt = 0 ,  cnt1 = 0 , even = 0 , od = 0;


            for(auto it:m)
            {
                if(it.second==1)
                {
                    cnt++;
                }
                else
                {
                    if(it.second%2==0)
                    {
                        even++;
                    }
                    else
                    {
                        od++;
                    }
                }
            }

            m.clear();
            s1.clear();


            if(even>=cnt)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;

            }




        }
    }



	return 0;
}
