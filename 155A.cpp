#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n ;

    cin >> n;


    int score[n];


    for(int i=0; i<n; i++)
        cin >> score[i];

    int low = 0;

    int frst = score[0];

    for(int i=1; i<n; i++)
    {
        if(score[i]<frst)
        {
            low++;
            frst = score[i];
        }
    }



    int high = 0;

    int first = score[0];


    for(int i=1; i<n; i++)
    {

        if(score[i]>first)
        {
            high++;
            first = score[i];
        }

    }


    cout << low + high << endl;


    return 0;
}
