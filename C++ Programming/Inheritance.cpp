#include<iostream>
using namespace std;

class Demo          // parent/base class
{
    public:
    int A, B;

    Demo()
    {
        A=11;
        B=21;
        cout<<"Inside Demo Constructor"<<"\n";
    }
    ~Demo()
    {
        cout<<"Inside Demo Destructor"<<"\n";
    } 
    void fun()
    {
        cout<<"Inside fun fo Demo"<<"\n";   
    }
};

class Hello: public Demo        //class Hello extends Demo----Java      child class
{
    public:
        int X, Y;

        Hello()
        {
            X=51;
            Y=121;
            cout<<"Inside Hello Constructor"<<"\n";
        }
            ~Hello()
    {
        cout<<"Inside Hello Destructor"<<"\n";
    } 
         void gun()
        {
            cout<<"Inside gun fo Demo"<<"\n";   
        }       
};

int main()
{
    Hello hobj;
    hobj.fun();
    hobj.gun();

    cout<<hobj.A<<"\n";
    cout<<hobj.B<<"\n";
    cout<<hobj.X<<"\n";
    cout<<hobj.Y<<"\n";
    
    return 0;
}