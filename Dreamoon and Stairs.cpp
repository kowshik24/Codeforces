#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m , a ,b;

    cin>>n>>m;

    a = (n+1)/2 ;

    b = (a+m-1)/m*m ;

    if(b>n)
        cout<<-1<<endl;
    else
        cout<<b<<endl;


        return 0;

}
