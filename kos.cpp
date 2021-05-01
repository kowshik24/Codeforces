#include<bits/stdc++.h>
using namespace std;
#define ll long long int



double Sec(double n, double m, double p)
{

   // cout << m  << " " << p << endl;


    while(1)
    {

        double mid = (p+m)*1.000/2;

        //cout << mid << endl;

        double ans1 = mid*mid;

        //cout << ans1 << endl;


        if(ans1==n || (abs(ans1-n))<0.0001)
        {
            return mid;
        }

        else if(ans1<n)
        {
            p = mid;
        }
        else
        {
            m = mid;
        }
    }



}
int main()
{
    double n;

    cin >> n;

    for(double i=1; ; i++)
    {
        double ans = i*i;

        if(ans==n)
        {
            cout << i << endl;
            return 0;
        }
        else if(ans>n)
        {

           cout << setprecision(10) << Sec(n,i,i-1) << endl;
            return 0;
        }
    }
}

