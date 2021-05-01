#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int n;

    cin >> n;

    int v[n];

    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }


    int flag = 0;

    int sum1 = 0 , sum2 = 0 , count1 = 0 , count2 = 0;

    for(int i=0; i<n; i++)
    {
        if((v[i]==1 && v[i+1]==2) || (v[i]==2 && v[i+1]==1))
        {
            sum1 += 3;
            count1++;
        }
        else if((v[i]==3 && v[i+1]==1) || (v[i]==1 && v[i+1]==3))
        {
            sum2 += 4;
            count2++;
        }
        else if((v[i]==2 && v[i+1]==3) || (v[i]==3 && v[i+1]==2))
        {
            flag = 1;
            break;
        }
    }


    if(flag==1)
    {
        cout << "Infinite" << endl;
    }
    else
    {
        cout << "Finite" << endl;
        cout << (sum1/count1) + (sum2/count2) << endl;
    }

    return 0;
}
