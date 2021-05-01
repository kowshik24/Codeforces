#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    int num[1002];

    cin >> a >> b >> c;

     num[0]=a+b*c;

     num[1]=a*(b+c);

     num[2]=a*b*c;

     num[3]=(a+b)*c;

     num[4]=(a*b)+c;

     num[5]=a+b+c;


     sort(num,num+6);

     cout << num[5] << endl;

     return 0;


}
