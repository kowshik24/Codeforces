#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin >> n;

    char bus[n][10];


    for(int i=0; i<n; i++)
    {
        for(int j=0; j<5; j++)
        {
            cin >> bus[i][j];
        }
    }


//    for(int i=0; i<n; i++)
//    {
//        for(int j=0; j<5; j++)
//        {
//             cout << bus[i][j];
//        }
//        cout << endl;
//    }

    int flag = 0;


    for(int i=0; i<n; i++)
    {
        if(bus[i][0]=='O' && bus[i][1]=='O')
        {
            bus[i][0]='+';
            bus[i][1]='+';
            flag = 1;
            break;
        }

        if(bus[i][3]=='O' && bus[i][4]=='O')
        {
            bus[i][3]='+';
            bus[i][4]='+';
            flag = 1;
            break;
        }
    }

    if(flag==1)
    {

        cout << "YES" << endl;

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<5; j++)
            {
                cout << bus[i][j];
            }
            cout << endl;
        }

    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
