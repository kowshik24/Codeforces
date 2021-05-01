#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n ,a[105] = {0};

    char s[105];

    cin >> n;

    scanf("%s",&s);

    //int len = strlen(s);

    int b=0,count=0,j=0;

    for(int i=0; i<n ; i++)
    {
        if(s[i]=='B')
        {
            b++;
            //count++;
            //cout << b << endl;
        }

        else if(s[i]=='W')
        {
            a[j]=b;

            //cout << a[j] << endl;

            b=0;
            j++;
        }
    }

    if(b>=1)
    {
        a[j]=b;
    }

    //cout << count << endl;

    // cout << "The array is  " << endl;

    for(int i=0; i<105 ; i++)
    {
        if(a[i]>=1)
        {
            count++;
        }
    }

    cout << count << endl;

    for(int i=0; i<105; i++)
    {
        if(a[i]>=1)
        {
            cout << a[i] << " ";
        }
    }

    return 0;
}
