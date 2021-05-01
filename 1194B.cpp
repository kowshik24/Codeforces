#include<bits/stdc++.h>
using namespace std;

int main()
{
    char cros[1002][1002];

    int t;

    cin >> t;


    for(int i=0; i<t; i++)
    {
        int r, c;


        cin >> r >> c;


        for(int j=0; j<r; j++)
        {
            for(int k=0; k<c; k++)
            {
                cin >> cros[j][k];
            }
        }


        int flag = 0, flag1 = 0;


        for(int l=0; l<r; l++)
        {

            int count = 0;

            for(int m=0; m<c; m++)
            {
                if(cros[l][m]=='*')
                {
                    count++;
                }
            }

            if(count==r)
            {
                flag = 1;
                break;
            }
        }


        for(int m1=0; m1<c; m1++)
        {

            int count = 0;

            for(int n1=0; n1<r; n1++)
            {
                if(cros[m1][n1]=='*')
                {
                    count++;
                }
            }

            if(count==c)
            {
                flag1 = 1;
            }
        }

        if(flag == 1 || flag1 ==1)
        {


            cout << 0 << endl;
        }

        else
        {

            vector<int>col;
            vector<int>row;

            for(int l=0; l<r; l++)
            {

                int count = 0;

                for(int m=0; m<c; m++)
                {
                    if(cros[l][m]=='*')
                    {
                        count++;
                    }
                }

                row.push_back(count);
            }



        for(int m1=0; m1<c; m1++)
        {

            int count = 0;

            for(int n1=0; n1<r; n1++)
            {
                if(cros[m1][n1]=='*')
                {
                    count++;
                }
            }

            col.push_back(count);


        }


        sort(col.begin(),col.end());
        sort(row.begin(),row.end());


        int maxi = max(col[col.size()-1],row[row.size()-1]);



        cout << maxi << endl;


        }
    }

    return 0;
}

