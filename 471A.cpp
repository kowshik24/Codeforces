#include<bits/stdc++.h>
using namespace std;


int main()
{
    int stick[10];

    int cnt[10]={0};


    for(int i=0; i<6; i++)
    {
        cin >> stick[i];
        cnt[stick[i]]++;
    }


    int f = 0;

    int mark;

    for(int i=1; i<=9; i++)
    {
        if(cnt[i]>=4)
        {
            f = 1;
            mark = i;
            break;
        }
    }




    if(f)
    {

        int st[2]={0};
        int k = 0;

        for(int i=0; i<6; i++)
        {
            if(stick[i]==mark)
            {
                stick[i]=0;
            }
            else
            {
                st[k]=stick[i];
                k++;
            }
        }

        if(st[1]==st[0])
        {
            cout << "Elephant" << endl;
        }
        else
        {
            cout << "Bear" << endl;
        }


    }
    else
    {
        cout << "Alien" << endl;
    }

    return 0;


}
