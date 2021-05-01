#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,m;

    cin >> n ;

    int ar[n];
    for(int i=0; i<n; i++)
        cin >> ar[i];

    cin >> m;

    int ar2[m];

    for(int i=0; i<m; i++)
        cin >> ar2[i];

    int sum = 0;
    int f = 0, f1 = 0;

//
//    for(int i=0; i<n; i++)
//    {
//
//        for(int j=0; j<m; j++)
//        {
//            sum = ar[i] + ar2[j];
//
////            cout << sum << endl;
//
//
//            f = 0;
//
//            for(int k=0; k<n; k++)
//            {
//                if(sum==ar[k])
//                {
//                    f = 1;
//                    break;
//                }
//                else
//                    continue;
//            }
//
//            if(f==0)
//            {
//                f1 = 0;
//
//                for(int l=0; l<m; l++)
//                {
//                    if(sum == ar2[l])
//                    {
//                        f1 = 1;
//                        break;
//                    }
//                    else
//                    {
//                        continue;
//                    }
//                }
//
//
//            }
//
//
//            if(f==0 && f1==0)
//            {
//                cout << ar[i] << " " << ar2[j] << endl;
//                return 0;
//            }
//        }
//
//
//    }




        sort(ar,ar+n);
        sort(ar2,ar2+m);

        cout << ar[n-1] << " " << ar2[m-1] << endl;
        return 0;

}
