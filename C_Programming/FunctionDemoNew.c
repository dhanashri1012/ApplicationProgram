#include<stdio.h>

int addition(int A, int B)
{
    int result=0;

    result=A+B;

    return result;
}

int main()
{
    int No1=10;
    int No2=20;
    int Ans=0;

    Ans=addition(No1,No2);

    printf("%d", Ans);

    return 0;
}