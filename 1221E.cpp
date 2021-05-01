#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a , b;

    string s;



    int t;


    cin >> t;



    while(t--)
    {
        cin >> a >> b;


        cin >> s;


        int len = s.length();



        int count = 0;

        vector<int>v;


        for(int i=0; i<len; i++)
        {
            if(s[i]=='X')
            {
                if(count>0)
                {
                    v.push_back(count);
                }

                count = 0;
            }
            else
            {
                count++;
            }
        }

        if(count>0)
        v.push_back(count);

        sort(v.begin(),v.end());

        int count1 = 0 , count2 = 0;


       int c = 0;


       int sum = 0;

       for(int m=v.size()-1; m>=0; m--)
        {
            cout << v[m] << endl;

            sum += v[m];
        }

//        cout << sum << endl;



        while(1)
        {
            if(sum < a || sum < b)
                break;



            for(int j=v.size()-1; j>=0; j--)
            {


                if(sum<a || sum < b)
                {
                    break;
                }
                else if(c==0)
                {
                    if(v[j]>=a)
                    {
                        count1++;
                        v[j] -= a;
                        sum -= a;
                        c = 1;
                        break;
                    }
                }
                else if(c==1)
                {
                    if(v[j]>=b)
                    {
                        count2++;
                        v[j] -= b;
                        sum -= b;
                        c = 0;
                        break;

                    }
                }
            }
        }


       cout << endl;


        cout << "count1 " << count1 << "cout2 " << count2 << endl;




        if(count1==count2)
        {
            cout << "NO" << endl;

        }
        else if(count1>count2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;

        }
    }


    return 0;
}
