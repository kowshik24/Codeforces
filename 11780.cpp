#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;

    cin >> n;


    int party[n];


    long long int  sum = 0;

    for(int i=0; i<n; i++)
    {
        cin >> party[i];

        sum += party[i];
    }




    long long int majo =  (sum / 2);

//   cout << majo << endl;



    if(party[0] > majo)
    {

//        cout << "as" << endl;
        cout << 1 << endl;
        cout << 1 << endl;
        return 0;
    }


    else
    {

          vector<int>v;




        int count = 0;

        int no_1 = party[0];

        count++;

        v.push_back(1);



        for(int i=1; i<n; i++)
        {

            if(no_1 > majo)
            {
                break;
            }
            if(no_1>=(party[i]*2))
            {
                count++;
                v.push_back(i+1);
                no_1 += party[i];
            }
        }

        if(no_1 < majo)
        {
            cout << 0 << endl;
            return 0;
        }
        else
        {



        cout << count << endl;

        for(int j=0; j<v.size(); j++)
            cout << v[j] << " ";
        }
    }


    return 0;



}
