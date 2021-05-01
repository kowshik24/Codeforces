#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;

    cin >> n;


    string s[n];

    int count = 0;

    int sum = 0;

    for(int i=0; i<n; i++)
    {
        cin >> s[i];

//        if(i==0)
//        {
//            count++;
//        }
//        else if(s[i-1]==s[i])
//        {
//            count++;
//        }
//        else
//        {
//            sum += count;
//            count = 0;
//        }
    }


    for(int i=0; i<n; i++)
    {
        if(s[i]==s[i+1])
        {
            continue;
        }
        else
        {
            sum += 1;
        }
    }

    cout << sum << endl;

    return 0;
}
