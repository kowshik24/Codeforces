#include<iostream>
using namespace std;

class base {
    int x;
public:
    void setx(int n)
    {
        x=n;
    }
    void showx()
    {
        cout << x << endl;
    }
};

class derived : private base{
    int y;
public:
    void setxy(int n,int m)
    {
        setx(m);
        y=n;
    }
    void showy()
    {
        showx();
         cout << y << endl;
    }
};

int main()
{
    derived ob;

    ob.setxy(10,20);

    ob.showy();

    return 0;
}
