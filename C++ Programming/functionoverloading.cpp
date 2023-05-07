#include<iostream>
using namespace std;

class Demo
{
    public:

        int Addition(int No1, int No2)
        {
            cout<<"Add of 2 int"<<"\n";
            return No1+No2;
        }
        float Addition(float No1, float No2)
        {
            cout<<"Add of 2 float"<<"\n";
            return No1+No2;
        }
        double Addition(double No1, double No2)
        {
            cout<<"Add of 2 double"<<"\n";
            return No1+No2;
        }

};
int main()
{
    Demo obj;
    int iRet=obj.Addition(10,11);
    cout<<"Add of int is: "<<iRet<<"\n";

    float fRet=obj.Addition(10.5f,11.1f);
    cout<<"Add of float is: "<<fRet<<"\n";

    double dRet=obj.Addition(10.5,11.1);
    cout<<"Add of double is: "<<dRet<<"\n";

    return 0;

}