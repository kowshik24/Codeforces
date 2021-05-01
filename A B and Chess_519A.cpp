#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[100][100];

    int sum=0,sum1=0;

    for(int i =0; i<8; i++)
    {
        for(int j=0; j<8; j++)
        {
            cin>>a[i][j];

            if(a[i][j]=='Q')
            sum+=9;

            else if(a[i][j]=='R')
            sum+=5;

            else if(a[i][j]=='B')
                sum+=3;

            else if(a[i][j]=='N')
                sum+=3;

            else if(a[i][j]=='P')
                sum+=1;

            else if(a[i][j]=='q')
            sum1+=9;

            else if(a[i][j]=='r')
            sum1+=5;

            else if(a[i][j]=='b')
                sum1+=3;

            else if(a[i][j]=='n')
                sum1+=3;

            else if(a[i][j]=='p')
                sum1+=1;

        }
    }

    if(sum>sum1)
    {
        cout<< "White" << endl;
    }
    else if(sum1>sum)
    {
        cout<<"Black"<<endl;
    }
    else
    {
        cout<<"Draw"<<endl;
    }

    return 0;
}
