#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n , k;

    cin >> n >> k;


    set<int>s;

    vector<int>v;

    int num ;



    for(int i=0; i<n; i++)
    {
        cin >> num;

        if(!s.count(num))
        {
            v.push_back(i+1);
            s.insert(num);
        }
    }


    if(v.size()<k)
    {
        cout << "NO" << endl;
    }
    else
    {

        cout << "YES" << endl;

        for(int i=0; i<k; i++ )
            cout << v[i] << " ";
    }
    return 0;

}
