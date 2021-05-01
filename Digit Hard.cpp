#include<bits/stdc++.h>
using namespace std;


int main()
{

    string str = "1";


      for(int i=2; i<=1000000000000; i++)
    {
        str = str +to_string(i);
    }

    long long int n;

    cin >> n;






    cout << str[n-1] << endl;


    return 0;
}
