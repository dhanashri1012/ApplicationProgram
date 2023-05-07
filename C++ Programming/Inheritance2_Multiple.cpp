    
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

class Hello     //class Hello extends Demo----Java      child class
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
            cout<<"Inside gun fo Hello"<<"\n";   
        }       
};

class PPA: public Hello, public Demo
{
    public:
    int I,J;
        PPA()
        {
            I=61;
            J=221;
            cout<<"Inside PPA Constructor"<<"\n";
        }
        ~PPA()
         {
        cout<<"Inside PPA Destructor"<<"\n";
        } 
         void sun()
        {
            cout<<"Inside sun fo PPA"<<"\n";   
        }     
};
int main()
{

    cout<<"Inside main"<<"\n";

    cout<<"---------------------------------"<<"\n";

    cout<<"Size of Demo: "<<sizeof(Demo)<<"\n";
    cout<<"Size of Hello: "<<sizeof(Hello)<<"\n";
    cout<<"Size of PPA: "<<sizeof(PPA)<<"\n";

    cout<<"---------------------------------"<<"\n";

    PPA pobj;
        cout<<"---------------------------------"<<"\n";
    pobj.fun();
    pobj.gun();
    pobj.sun();

    cout<<"---------------------------------"<<"\n";

    cout<<pobj.A<<"\n";
    cout<<pobj.B<<"\n";
    cout<<pobj.X<<"\n";
    cout<<pobj.Y<<"\n";
    cout<<pobj.I<<"\n";
    cout<<pobj.J<<"\n";

    cout<<"---------------------------------"<<"\n";

    cout<<"End of main"<<"\n";

    cout<<"---------------------------------"<<"\n";
    
    return 0;
}