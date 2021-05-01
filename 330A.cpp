#include<bits/stdc++.h>
using namespace std;


int main()
{
    int col , row ;


    cin >> row >> col;



    char cake[row][col];



    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin >> cake[i][j];
        }
    }




    int sum = 0;


    for(int i=0; i<row ; i++)
    {
        int flag = 0;

        int count = 0;


        for(int j=0; j<col; j++)
        {
            if(cake[i][j]=='S')
            {
                flag = 1;

                for(int n=0; n<j; n++)
                {
                    cake[i][n] = '.';
                }

                break;
            }

            else
            {
                cake[i][j] = '1';
                count++;
            }
        }

        if(flag==0)
            sum += count;
    }



//    for(int i=0; i<row; i++)
//    {
//        for(int j=0; j<col; j++)
//        {
//            cout << cake[i][j];
//        }
//
//        cout << endl;
//    }



//    cout << sum << endl;



    int sum1 = 0;

    for(int i=0; i<col; i++)
    {


        int check = 0;

        int count1 = 0;

        for(int j=0; j<row; j++)
        {

            if(cake[j][i]=='S')
            {
//                for(int n=0; n<i; n++)
//                {
//                    cake[i][n] = '.';
//                }

                check = 1;
                break;

            }

            if(cake[j][i]=='.')
            {
                count1++;
            }

        }


        if(check == 0)
            sum1 += count1;

    }

//    cout << sum1 << endl;

    cout << sum1 + sum << endl;


    return 0;

}
