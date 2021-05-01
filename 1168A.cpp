#include<bits/stdc++.h>
using namespace std;

int main()
{


    int n , m;

    cin >> n >> m;

    int arr[n];

    for(int i=0; i<n; i++)
        cin >> arr[i];


        int count = 0;

        for(int i=0; i<n; i++)
        {
            if( i>0 && arr[i]<arr[i-1])
            {
                if((arr[i-1] + 1 ) % m == 0)
                {
                    count++;
                }
            }
        }

        cout << count << endl;


        return 0;




}
