    
#include<iostream>
using namespace std;

class Base          // parent/base class
{
    public:
    int A, B;
    virtual void Fun()  //1000 from text section
    {
        cout<<"Inside Fun fo Base"<<"\n";   
    }
    virtual void Gun()  //2000
    {
        cout<<"Inside Gun fo Base"<<"\n";   
    }
     virtual void Sun()  //3000
    {
        cout<<"Inside Sun fo Base"<<"\n";   
    }

};

class Derived: public Base          
{
    public:
        int X, Y;
        void Fun()  //4000 from text section
    {
        cout<<"Inside Fun fo Derived"<<"\n";   
    }
        void Gun()  //5000
    {
        cout<<"Inside Gun fo Derived"<<"\n";   
    }
        void Sun()  //6000
    {
        cout<<"Inside Sun fo Derived"<<"\n";   
    }

};



int main()
{
Base *bp=new Derived;       //up castinng allowed

bp->Fun();
bp->Gun();
bp->Sun();
    return 0;
}
