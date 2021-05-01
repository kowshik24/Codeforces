#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n;

    cin >> n;

    if(n%2==0)
    {
        int root = sqrt(n);
        cout << root * 2 << " " << n-(root*2) << endl;
    }
    else
    {
        int odd [] = {4,6,8,9};

        for(int i=0; i<4; i++)
        {
            int num = n - odd[i];

//            cout << num << endl;

            for(int j=2; j<=9; j++)
            {
                if(num%j==0)
                {
                    cout << odd[i] << " " << num << endl;
                    return 0;
                }
            }
        }

    }

    return 0;
}
