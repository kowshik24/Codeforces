#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int  n,m;


    cin >> n >> m;

   long long int  chest[n],key[m];

  long long   int even_ch =0,odd_ch=0;
    for(int i=0; i<n; i++)
        {
            cin >> chest[i];
            if(chest[i]%2==0)
            {
                even_ch++;
            }
            else
            {
                odd_ch++;
            }
        }

      long long   int even_ke=0,odd_ke=0;

        for(int i=0; i<m; i++)
        {
            cin >> key[i];
            if(key[i]%2==0)
            {
                even_ke++;
            }
            else
            {
                odd_ke++;
            }
        }

      long long   int res = min(odd_ch,even_ke);
       long long  int res1 = min(even_ch,odd_ke);

        cout << res + res1 << endl;

        return 0;
}
