#include<bits/stdc++.h>

using namespace std;

int main()
{

    char s[105];

    int sum = 0 ;

    scanf("%s",&s);

    int len = strlen(s);

    for(int i=0; i<len ; i++)
    {
        if(i==0)
        {
            sum = sum + min(abs('z'-s[i]+1) , 26-abs('z'-s[i]+1));

           // cout << "The sum is   " << sum << endl;

            //sum = 0;
        }
        else
        {
            sum = sum + min(abs(s[i-1]-s[i]) , 26-abs(s[i-1]-s[i]));

             //cout << "The sum is   " << sum << endl;

             //sum = 0;
        }
    }

    cout << sum << endl;
}
