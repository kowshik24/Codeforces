#include<bits/stdc++.h>
using namespace std;


 int check(int x)
 {
     return ( x > 0 ? x : -x );
 }


int main()
{
    int x1,x2,y1,y2;

    cin >> x1 >> y1 >> x2 >> y2;

    if(x1!=x2 && y1!=y2 && check(x1-x2) != check(y1-y2))
    {
        cout << -1 << endl;
    }
    else
    {

    double len = sqrt(pow((x2-x1),2) + pow((y2-y1),2));

    if(x1==x2)
    {
        cout<< x1+len << " " << y1 << " " << x2+len << " " << y2 <<endl;
    }
    else if(y1==y2)
    {
        cout << x1 << " " << y1+len << " " << x2 << " " << y2+len << endl;
    }
    else
    {
        cout << x1 << " " << y2 << " " << x2 << " " << y1 <<endl;
    }
    }

    return 0;


}
