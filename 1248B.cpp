#include<bits/stdc++.h>
using namespace std;


int main()

{

    int n;

    cin >> n;



    long long int ar[n]={0};


    for(int i=0; i<n; i++)
        cin >> ar[i];




    sort(ar,ar+n);

    int last = n-1;
    int fst = 0;

    int f = 1;

    long long int sum = 0 , sum1 = 0;


    while(1)
    {
        if(f==1  && ar[last])
        {
        sum1 += ar[last];
        ar[last] = 0;
        last--;
        f = 0;

        }
        else if(f==0 && ar[fst])
        {
            sum += ar[fst];
            ar[fst] = 0;
            fst++;
            f = 1;

        }
        else
        {
            break;
        }

    }


    cout << (sum*sum) + (sum1*sum1) << endl;




    return 0;
}
