#include <iostream>
#include <cmath>
using namespace std;

class cal
{
protected:
    float a;
    float b;

public:
    void get()
    {
        cout << "enter two number :" << endl;
        cin >> a >> b;
    }

    void cal1()
    {
        int e;
        cout << "whatyou want to do +,-,/,*" << endl;
        cout<< "for + write 1"<<endl;
        cout<< "for - write 2"<<endl;
        cout<< "for / write 3"<<endl;
        cout<< "for * write 4"<<endl;

        cin >> e;

        if (e == 1)
        {
            cout << "sum : " << a + b;
        }
        else if (e == 2)
        {
            cout << "subtraction is :" << a - b;
        }
        else if (e == 3)
        {
            cout << "subtraction is :" << a / b;
        }
        else if (e == 4)
        {
            cout << "subtraction is :" << a * b;
        }
        else
        {
            cout << "errrorrrrrrr";
        }
    }
};

class scal : public cal
{
public:
    void cal2()
    {
        int r;
        cout << "what you want cos(),sin(),pow()" << endl;
        cout<< "for cos() write 1"<<endl;
        cout<< "for sin() write 2"<<endl;
        cout<< "for pow() write 3"<<endl;
        

        cin >> r;
        if (r == 1)
        {
            cout << "sin():" << sin(a + b);
        }
        else if (r == 2)
        {
            cout << "cos():" <<cos(a + b);
        }
        else if (r == 3)
        {
            cout << "pow():" << pow(a, b);
        }
        else
        {
            cout << "eroooeorooer" << endl;
        }
    }
};

class show : public scal
{
public:
    void cal3()
    {
        int t;
        cout << "for simpale calculator write 1 :" << endl;
        cout << "for scintefic calculator write 2" << endl;
        cin >> t;
        get();
        if (t == 1)
        { 
            cal1();
        }
        else if (t == 2)
        {
            cal2();
        }
        else
        {
            cout << "wewjefkojoghg";
        }
    }
};

int main(int argc, char const *argv[])
{
    show suraj;
    suraj.cal3();
    return 0;
}
