    
#include<iostream>
//using namespace std;

namespace Marvellous
{

class Demo
{
    public:
        int A;
        int B;

        Demo(int i=10,int j=20)     //parameterised constructor with default arguments
        {
                A=i;
                B=j;
        }

};

}

using namespace Marvellous;

int main()
{
    //Marvellous::Demo obj1;

    Demo obj1;

    std::cout<<"inside main"<<"\n";

    return 0;
}