#include<iostream>
using namespace std;

class Demo
{
    public:
    int A,B;
    
    Demo()
    {
        cout<<"Default Constructor"<<"\n";
    }
    Demo(11,21)
    {
        cout<<"Parameterised Constructor"<<"\n";
    }
    ~Demo()
    {
        cout<<"Destructor"<<"\n";
    }
};
int main()
{
        cout<<"Inside main"<<"\n";

    Demo obj1;                  //static memory all. of object
    Demo obj2(11,12);                  //static memory all. of object

    Demo *p=new Demo();                  //DYNAMIC memory all. of object
    Demo *q=new Demo(11,21);                  //DYNAMIC memory all. of object

    delete p;
    delete q;

    cout<<"End of main"<<"\n";
    return 0;
}