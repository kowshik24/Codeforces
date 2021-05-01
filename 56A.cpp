#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    string st[11] = {"ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"};



    int count = 0;

    for(int i=0; i<t;i++)
    {

        string st1;

        cin >> st1;

        if(st1[0]>='0' && st1[0]<='9')
        {
            int num = stoi(st1);
            if(num<18)
            {
                count++;
            }
        }
        else
        {
            for(int i=0; i<11; i++)
            {
                if(st1==st[i])
                {
                    count++;
                    break;
                }
            }
        }





    }

    cout << count << endl;

    return 0;
}
