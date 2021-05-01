#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;

    cin >> s >> t;



    int m = t.size();

    int n = s.size();



    int n1 = 0;
    int n2  = 0;


    for(int i=0; i<n; i++)
    {

        int count = 0;

        for(int j=0; j<m  && (i+j)<n ; j++)
        {
            n1 = 0;


            if(s[i+j]!=t[j])
            {
                break;
            }
            else
            {
                 n1 = j+1;
                count++;
            }

        }

        if(count==m)
        {

//            cout << i << " " << n-n1 << endl;

            cout << max(i,(n-n1-i)) << endl;
        }



    }




    return 0;
}
