#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;



    cin >> n;

    int team[n] , team1[n];


    for(int i=0; i<n; i++)
    {
        cin >> team[i] >> team1[i];
    }


    int count = 0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(team[i]==team1[j])
            {
                count++;
            }
        }
    }

    cout << count << endl;






    return 0;

}
