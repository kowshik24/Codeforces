#include<bits/stdc++.h>
using namespace std;

int main()
{
    string num;


    cin >> num;

    string num1;


    num1 = num;



    long long int len = num1.length();


    sort(num1.begin(),num1.end());

    int mini = num1[0]-'0';


    for(int i=0;i<num.length(); i++)
    {

            int a = num[i]-'0';

            if(i==0 && a==9)
            {
                cout << 9;
                continue;
            }


            if(a>4)
            {
                cout << 9 - a;
            }
            else
            {
                cout << a;
            }
    }

    return 0;
}
