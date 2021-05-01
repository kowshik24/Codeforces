#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;

    cin >> n;


    string st;

    cin >> st;


        int count = 0;

        for(int i=0; i<n; i+=2)
        {
           if(st[i]==st[i+1])
           {
               count++;
               if(st[i]=='a')
                st[i]= 'b';
               else
                st[i] = 'a';
           }

        }

        cout << count << endl;
        cout << st << endl;

        return 0;

}
