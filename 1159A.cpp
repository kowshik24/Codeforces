#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    char str[103];

    cin >> n;
    scanf("%s",&str);



    int sum = 0;

    for(int i=0; i<n; i++)
    {

        if(sum<0)
        {
            sum = 0;
        }
        if(str[i]=='-')
        {
            sum -= 1;
        }
        else if(str[i]=='+')
        {
            sum += 1;
        }


    }

    if(sum<0)
        sum = 0;


    cout << sum << endl;


    return 0;
}
