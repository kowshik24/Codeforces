#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[100000] , sum = 0;

    char s[100005];

    for(int i=1; i<=4; i++)
    {
        cin >> a[i];
    }


    scanf("%s",&s);


    int len = strlen(s);

    for(int i=0; i<len ; i++)
    {
        sum = sum + a[s[i]-'0'];

        //cout << "The sum is  " << sum << endl;
    }


    cout << sum << endl;


    return 0;
}
