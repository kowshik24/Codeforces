#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;

    cin >> n;


    long long int num[n] , num1[n];


    for(int i=0; i<n; i++)
    {

        cin >> num[i];
        num1[i] = num[i];
    }


   sort(num , num+n);

   long long int min = num[0];

   int count = 0;




   for(int i=1; i<n; i++)
   {
       if(num[i]>=min)
       {
           count++;
           min += num[i];
       }

   }


   cout << count + 1 << endl;


    return 0;
}
