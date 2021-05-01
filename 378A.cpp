#include<bits/stdc++.h>
using namespace std;



int main()
{
    int a , b;

    cin >> a >> b;

    int equl = 0 , boro = 0 , kom = 0;

    for(int i=1; i<=6; i++)
    {

        if(abs(a-i)==abs(b-i))
        {
            equl++;
        }
        else if(abs(a-i)<abs(b-i))
        {
            boro++;
        }
        else
        {
            kom++;
        }
    }
    cout << boro << " " << equl << " " << kom << endl;

    return 0;
}
