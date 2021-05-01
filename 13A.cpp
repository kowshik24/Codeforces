#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin >> n;

    int m = n;

    int k = n;

    int sum = 0;
    int rem;

    for(int i=2; i<=n-1; i++)
    {
        n = k;

//        cout << n << endl;

        while(n!=0)
        {

           rem = n % i;
//           cout << rem << " ";
             n = n/i;
           sum += rem;


        }
//        cout << endl;

        n = k;
    }

    cout << (sum)/(__gcd(sum,(m-2)))  << "/" << (m-2)/(__gcd(sum,(m-2))) << endl;

}
