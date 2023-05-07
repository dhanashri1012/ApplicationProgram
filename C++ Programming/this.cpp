#include<iostream>
using namespace std;

class Demo
{
    public:

        int No1;
        int No2;


        Demo(int i,int j)
        {

            No1=i;
            No2=j;
        }
        void Fun(int A, int B)
        {

        }

        void gun(int A)
        {

        }

        
};


int main()
{
    Demo obj1(11,21);
    Demo obj2(51,101);

    obj1.fun(10,20);        //fun(&obj1,10,20);     fun(100,10,20)
    obj2.gun(10);           //gun(&obj2,11);        gun(200,10)

    return 0;
}

//Every C++ programs gets internally converted into C program.