#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;

    cin >> n;


    int stu[n];

    int one_index[n],two_index[n], three_index[n];
    int m = 0 , o = 0 , l = 0;


    int prog = 0 , mat = 0, phy = 0;


    for(int i=0; i<n; i++)
    {
        cin >> stu[i];

        if(stu[i]==1)
        {
            prog++;
            one_index[l] = i+1;
            l++;
        }
        else if(stu[i]==2)
        {
            mat++;
            two_index[m] = i+1;
            m++;
        }
        else if(stu[i]==3)
        {
            phy++;
            three_index[o] = i+1;
            o++;
        }
    }


    if(prog==0 || mat == 0 || phy == 0 )
    {
        cout << 0 << endl;
        return 0;
    }
    else
    {
        int bodx = min(mat,min(prog,phy));


        cout << bodx << endl;

        for(int i=0; i<bodx; i++)
        {
            cout << one_index[i] << " " << two_index[i] <<  " " << three_index[i] << endl;
        }



    }

    return 0;
}
