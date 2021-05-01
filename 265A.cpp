#include<bits/stdc++.h>
using namespace std;



int main()
{
    string t,s;

    cin >> t >> s;


    int len = t.length();
    int len1 = s.length();




    int count = 0;


    int mark = 0;


    for(int i=0; i<len1; i++)
    {
        if(s[i]==t[mark])
        {
            count++;
            mark++;
        }
    }

    cout << count +1 << endl;

    return 0;
}
