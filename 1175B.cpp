#include<bits/stdc++.h>
using namespace std;



const long long INF = 1ll << 32;

int main()
{
    int n;

    int num;


    stack<long long int > st;

    long long int res = 0;


    string str;


    cin >> n;

     st.push(1);

    for(int i=0; i<n; i++)
    {

        cin >> str;

        if(str=="for")
        {
            cin >> num;

            st.push(min(INF , st.top()*num));

        }
        else if(str=="end")
        {
            st.pop();
        }
        else
        {
            res += st.top();
        }

    }

    if(res>=INF)
    {
        cout << "OVERFLOW!!!" << endl;
    }
    else
    {
        cout << res << endl;

    }

    return 0;

}
