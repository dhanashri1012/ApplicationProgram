    
#include<iostream>
using namespace std;

//Abstract class: it is class, which contains atleast single pure virtual function in it

class Base          
{
    public:
    int A, B;

    int Addition(int i, int j)  // Concrete Function   body ahe  1000
    {
            return i+j;
    }

    virtual int substraction(int i, int j)  // Concrete Function   2000
    {
          return i-j; 
    }

   virtual int Multiplication(int i, int j) =0;  // Abstract Function   body nahis
    
};

class Derived: public Base          
{
    public:
        int X, Y;

    int substraction(int i, int j)      // Concrete Function 3000
    {
        int Ans=0;
        Ans=i-j;
        return Ans;
    }

    int Multiplication(int i, int j)    // Concrete Function 4000
    {
        return i*j;
    }
};



int main()
{   
    // Base bobj;   //NA pure virtual so NA

    Base *bp=new Derived();

    int Ret=0;

    Ret=bp->Addition(10,11);
    cout<<"Addition: "<<Ret<<"\n";          // Base Addition  21

    Ret=bp->substraction(10,11);
    cout<<"substraction: "<<Ret<<"\n";          // Derived Sub -1
    
    Ret=bp->Multiplication(10,11);
    cout<<"Multiplication: "<<Ret<<"\n";        //Derived Mul 110
    
    return 0;
}
