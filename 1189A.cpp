#include<bits/stdc++.h>
using namespace std;

int main()
{
    int len;


    cin >> len;



    char num[10002];


    scanf("%s",&num);


    int one = 0 , zero = 0;

    for(int i=0; i<len; i++)
    {
        if(num[i] == '1')
            one++;
        else
            zero++;
    }


    if(one == zero)
    {
        cout << 2 << endl;


        cout << num[0] << " ";


        for(int i=1; i<len; i++)
            cout << num[i];



        cout << endl;
    }
    else
    {
        cout << 1 << endl;


        cout << num << endl;
    }


    return 0;
}
