#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    int t,n;
    char str[105];

    cin >> t;



    for(int i=0; i<t; i++)
    {
        cin >> n;
        scanf("%s",&str);



        int pos = n;
        for(int i=0; i<n; i++)
        {
            if(str[i]=='8')
            {
                pos = i;
                break;
            }
        }


        if((n-pos)>=11)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }


    return  0;
}
