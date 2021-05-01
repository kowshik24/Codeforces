#include<iostream>
using namespace std;

class base{
protected:
    int a,b;
public:
    void setab(int n,int m)
    {
        a=n;
        b=m;
    }
};

class derived : public base{
    int c;
public:
    void setc(int n)
    {
        c=n;
    }
    void showab()
    {
        cout << a << " " << b << " " << c << endl;
    }
};


int main()
{

    derived ob;
    ob.setab(1,3);

    ob.setc(5);
    ob.showab();

    return 0;
}
