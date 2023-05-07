#include<iostream>
using namespace std;

class Demo
{
    public:
    int No1;
    int No2;

    void fun()
    {
        cout<<"Inside fun\n";
    }

    void gun()
    {
        cout<<"Inside gun\n";
    }
};

int main()
{
    Demo obj1;

    obj1.fun();
    obj1.gun();  

    return 0;

}
