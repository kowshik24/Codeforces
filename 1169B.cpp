#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n ,m;

    int count = 0;

    cin >> n >> m;

    int arr[m][3];

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<2;j++)
        {
            cin >> arr[i][j];

            if(j>0)
            {
                if(arr[i][j-1]==arr[i][j])
                {
                    count++;
                }
            }
        }
    }

    if(count==m)
    {
        cout << "YES" << endl;
    }
    else
    {

        int flag = 0;

        for(int i=0; i<m; i++)
        {

            if(flag==1)
                break;

            for(int j=0; j<2; j++)
            {
                if(i>0)
                {
                    if(arr[i][j]==arr[i][j-1])
                    {
                        flag = 1;
                        break;
                    }
                }

            }
        }

        if(flag==1)
            cout << "NO" << endl;
        else
        {

            int count2 = 0, count1 = 0;

            for(int i=0; i<m; i++)
            {
                if(i>0)
                {
                    if(abs(arr[i][0]-arr[i-1][0])==1)
                    {
                        count1++;
                    }
                }
            }

             for(int i=0; i<m; i++)
            {
                if(i>0)
                {
                    if(abs(arr[i][1]-arr[i-1][1])==1)
                    {
                        count2++;
                    }
                }
            }

            if(count1==count2)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;


        }

    }

    return 0;
}
