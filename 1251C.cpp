#include<bits/stdc++.h>
using namespace std;



int main()
{
    int t;

    cin >> t;


    while(t--)
    {

        string st;

        cin >> st;


        int len = st.length();


        int point = 0;


        while(point!=len-1)
        {
            if((st[point]%2)!=(st[point+1]%2) && st[point]>st[point+1])
            {
                swap(st[point],st[point+1]);
                point--;
            }
            else
                point++;
        }

        cout << st << endl;
    }
}
