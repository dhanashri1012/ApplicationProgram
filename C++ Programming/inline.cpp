    
#include<iostream>
using namespace std;

class Demo
{
    public:
    inline void fun()
    {
        cout <<"inside fun"<<"\n";
    
    }

};
int main()
{
    
    Demo obj;

    obj.fun();      // cout <<"inside fun"<<"\n";

    return 0;
}