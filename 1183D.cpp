#include<bits/stdc++.h>
using namespace std;


bool f(int a, int b)
{
    if(a<b)
        return true;
    else
        return false;
}
int main()
{
    int test;

    cin >> test;


    for(int k=0; k<test; k++)
    {
        int n;
        cin >> n;
        vector<int> cnt(n + 1);


        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            ++cnt[x];
        }



        sort(cnt.rbegin(), cnt.rend());


        int ans = cnt[0];
        int lst = cnt[0];


        for (int i = 1; i <= n; ++i)
        {
            if (lst == 0)
                break;
            if (cnt[i] >= lst)
            {
                ans += lst - 1;
                lst -= 1;
            }
            else
            {
                ans += cnt[i];
                lst = cnt[i];
            }
        }
        cout << ans << endl;




    }


    return 0;
}
