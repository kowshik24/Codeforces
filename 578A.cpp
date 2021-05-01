#include<bits/stdc++.h>
using namespace std;


int main()
{
    string room;

    int n;

    cin >> n;

    cin >> room;



    bool res[10]={0};




    for(int i=0; i<n; i++)
    {
        if(room[i]=='L')
        {
            for(int j=0; j<10; j++)
            {
                if(res[j]==0)
                {


                    res[j]=1;
                    break;
                }

            }
        }
        else if(room[i]=='R')
        {
            for(int j=9; j>=0; j--)
            {
                if(res[j]==0)
                {
                    res[j]=1;
                    break;
                }
            }
        }
        else
        {
            res[room[i]-'0'] = 0;
        }

    }



    for(int i=0; i<=9; i++)
        cout << res[i];


    return 0;
}
