#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;

    cin >> n;

    int skil[n];

    for(int i=0; i<n; i++)
        cin >> skil[i];


    sort(skil,skil+n);

    int sum = 0;

    for(int i=0; i<n; i+=2)
    {
        sum += abs(skil[i]-skil[i+1]);
    }

    cout << sum << endl;

    return 0;
}
