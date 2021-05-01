#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    long long int k;


    cin >> n >> k;


    int t[n] , f[n];


    for(int i=0; i<n; i++)
    {
        cin >> f[i] >> t[i];
    }




    vector<long long int>onno;


    for(int i=0; i<n; i++)
    {
        if(t[i]>=k)
        {

            long long int tuki = f[i]-(t[i]-k);


            onno.push_back(tuki);

        }
        else
        {
            onno.push_back(f[i]);
        }
    }


    sort(onno.begin(),onno.end());
//
//    for(int i=0 ; i<onno.size();i++)
//        cout << onno[i] << endl;


    cout << onno[onno.size()-1] << endl;

    return 0;



}
