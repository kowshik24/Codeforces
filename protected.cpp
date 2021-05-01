#include<iostream>
using namespace std;

class samp{
    int a;
protected:
    int b;
public:
    int c;
    samp(int n,int m)
    {
        a=n;
        b=m;
    }
    int geta()
    {
        return a;
    }
    int getb()
    {
        return b;
    }
};

int main()
{
    samp ob(10,20);

    //ob.a=29;
   // ob.b=67;
    ob.c=98;

    cout << ob.geta() << endl;
    cout << ob.getb() << endl;

    return 0;
}
