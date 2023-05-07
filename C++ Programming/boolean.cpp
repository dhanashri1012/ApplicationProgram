#include<iostream>

using namespace std;

bool CheckEven(int No)
{
    if((No%2)==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int value=0;
    bool bRet; // bool 

    cout<<"Enter Number: \n";   // printf("Enter number\n");
cin>>value;                     //scanf("%d", &value);

    bRet=CheckEven(value);

    if(bRet==true)
    {

        cout<<"Even number\n";
    } 
    else
    {
        cout<<"Odd number\n";
    }
}