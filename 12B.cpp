#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s1,s2;

    cin >> s1 >> s2;

    sort(s1.begin(),s1.end());


    if(s1.size()!=1)
    {
        if(s1[0]=='0')
        {
            swap(s1[0],s1[1]);
        }
    }
    if(s1==s2)
        cout << "OK\n";
    else
        cout << "WRONG_ANSWER\n";

    return 0;
}
