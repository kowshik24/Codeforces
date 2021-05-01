
#include<bits/stdc++.h>
using namespace std;




int cnt[1009];

int main()
{


    int n;





    cin >> n;
       int ar[n];

    for(int i=0; i<n; i++)
    {


        cin >> ar[i];

        cnt[ar[i]]++;

    }

    if(n==1)
    {
        cout << "YES" << endl;
        return 0;
    }

    sort(ar,ar+n);



    sort(cnt,cnt+1009);

    int C = cnt[1008];

    if(C<=(n+1)/2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }



    return 0;
}
